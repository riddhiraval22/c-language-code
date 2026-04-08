from django.shortcuts import render
from .models import Contact,User

def index(request):
    return render(request,'index.html')
# Create your views here.
def contact(request):
    if request.method =="POST":
        Contact.objects.create(
            name=request.POST['name'],
            email=request.POST['email'],
            mobile=request.POST['mobile'],
            remarks=request.POST['remarks']
        )
        msg="Contact Saved Successfully"
        contacts=Contact.objects.all().order_by("-id")[:3]
        return render(request,'contact.html',{'msg':msg,'contacts':contacts})

    else:
        contacts=Contact.objects.all().order_by("-id")[:3]
        return render(request,'contact.html',{'contacts':contacts})

def signup(request):
    if request.method=="POST":
        try:
            User.objects.get(email=request.POST['email'])
            msg="Email Already Registered"
            return render(request,'signup.html',{'msg':msg})
        except:
            if request.POST['password']==request.POST['cpassword']:
                User.objects.create(
                    fname=request.POST['fname'],
                    lname=request.POST['lname'],
                    email=request.POST['email'],
                    mobile=request.POST['mobile'],
                    address=request.POST['address'],
                    password=request.POST['password'],
                    profile_picture=request.FILES['profile_picture'],
                )
                msg="Sign up suceessfully" 
                return render(request,'signup.html',{'msg':msg})
            else:
                msg="password & Confirm Password Does not Matched"
                return render(request,'signup.html',{'msg':msg})
        
    else:
        return render(request,'signup.html')
def login(request):
    if request.method == "POST":
        try:    
            user = User.objects.get(email=request.POST['email'])
            if user.password == request.POST['password']:
                request.session['email']= user.email
                request.session['fname']=user.fname
                request.session['profile_picture']=user.profile_picture.url
                return render(request,'index.html')
            else:
                msg="Incorrect password"
                return render(request,'login.html',{'msg':msg})
        except:
            msg="Email Not REgistered"
            return render (request,'login.html',{'msg':msg})
    else:
         return render(request,'login.html')

def logout(request):
    try:
        del request.session['email']
        del request.session['fname']
        msg="Logged Out Suceessfully"
        return render(request,'login.html',{'msg':msg})
    except:
        msg="Logged Out Suceessfully"
        return render(request,'login.html',{'msg':msg})
    
def profile(request):
    user=User.objects.get(email=request.session['email'])
    if request.method=="POST":
        user.fname=request.POST['fname']
        user.lname=request.POST['lname']
        user.email=request.POST['email']
        user.address=request.POST['address']
        user.mobile=request.POST['mobile']
        
        try:
            user.profile_picture=request.FILES['profile_picture']
        except:
            pass
        user.save()
        request.session['profile_picture']=user.profile_picture.url
        request.session['fname']=user.fname
        msg="Profile Updated Successfully"
        return render (request,'profile.html',{'user':user,'msg':msg})
    else:
        return render(request,'profile.html',{'user':user}) 
    
def change_password(request):
    user=User.objects.get(email=request.session['email'])
    if request.method=="POST":
        if user.password== request.POST['old_password']:
            if request.POST['new_password']== request.POSt['cnew_password']:
                if user.password!=request.POST['new_password']:
                    user.password=request.POSt['new_password']
                    user.save()
                    del request.seesion['email']
                    del request.session['fname']
                    mas="Change Password Successfully"
                    return render(request,'login.html',{'msg':msg})
                else:
                    msg="Old Password & new Password can't be same"
                    return render(request,'change-password.html',{'msg':msg})
            else:
                msg="New Password & confirm new PAssword not same"
                return render(request,'change-password.html',{'msg':msg})   

    else:
        return render(request,'change-password.html')
    
def forgot_password(request):
    return render(request,'forgot-password.html')