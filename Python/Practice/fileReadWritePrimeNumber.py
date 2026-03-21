import random

data=open("data.txt","w")
for i in range(10):
    data.write(str(random.randint(1,100))+",")
data.close()

data=open("data.txt","r")
even=open("even.txt","w")
odd=open("odd.txt","w")
prime=open("prime.txt","w")
NoPrime=open("NoPrime.txt","w")

l=data.read().split(",")[:-1]

for i in l:
    n=int(i)

    if n%2==0:
        even.write(i+",")
    else:
        odd.write(i+",")

for i in l:
    n=int(i)
    count=0

    for j in range(1,n+1):
        if n%j==0:
            count+=1

    if count==2:
        prime.write(i+",")
    else:
        NoPrime.write(i+",")

data.close()
even.close()
odd.close()
prime.close()
NoPrime.close()

print("data file content")
data=open("data.txt","r")
print(data.read())
data.close()

print("Even data file content")
data=open("even.txt","r")
print(data.read())
data.close()

print("Odd data file content")
data=open("odd.txt","r")
print(data.read())
data.close()

print("Prime data file content")
data=open("prime.txt","r")
print(data.read())
data.close()

print("NoPrime data file content")
data=open("NoPrime.txt","r")
print(data.read())
data.close()
