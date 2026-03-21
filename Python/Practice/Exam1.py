import random


lucky=[]
oddlist=[]
evenlist=[]

for i in range(10):
    num=random.randint(1,100)
    lucky.append(num)

for i in lucky:
    if i%2==0:
        evenlist.append(i)
        
    else:
        oddlist.append(i)
        
        
print("List : " ,lucky)
print("even number list: " , evenlist)
print("Odd Number list : ",oddlist)
