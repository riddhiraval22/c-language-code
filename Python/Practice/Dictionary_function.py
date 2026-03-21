#Dictionary and its functions ,

d={101:"Khushi",899:"Riddhi",767:"Anshu",545:"Shivani",323:"Zeel",
   122:"Chaitanya"}

print(d)
print(d[767])# key value
print(d.get(101))
#print(d.get(101))
print(d.items())
print(d.keys())
print(d.pop(767))# remove key values
print(d)
d.popitem()# remove last key and values
print(d)
d1={767:"Anshu",122:"Chaitanya"}
d.update(d1)# add 2 dictionary
print(d)
print(d.values())

for i in d:
   print(i," : ",d[i])

for key,value in d.items():
    print(key," : ",value)

if 89 in d:
    print("89 is avaliable in dictionary")
else:
    print("89 is not avaliable in dictionary")
