d={1:"jigar",2:"ajay",3:"Vijay",4:"kamal"}

key=int(input("Enter Existing key : "))
value=input("Enter new value : ")

if key in d:
    d[key]=value
else:
    print("Key is nnot presented in decionary " )
print(d)
