a=int(input("enter A:"))
b=int(input("enter B:"))
c=int(input("enter C:"))
print("A : ",a)
print("B : ",b)
print("C : ",c)
if(a>b):
    if(a>c):
        print(a,"Is max number")
    elif(b>c):
        print(b,"Is max number")
else:
        print(c,"Is max number")
