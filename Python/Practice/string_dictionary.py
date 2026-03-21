# find character  no like how many t in string
s=input("Enter string: ")
d={}

for i in s:
    d[i]=d.get(i,0)+1
    
print(d)
