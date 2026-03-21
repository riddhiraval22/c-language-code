oddnum=0
sum={}
evenum=0
d={1:1,2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,10:10}
d1={1:"1",2:"2",3:"3",4:"4",5:"5",6:"6",7:"7",8:"8",9:"9",10:"10"}
for i in d.values():
    #print(d[i])
    if i%2==0:
        evenum +=i
    else:
        oddnum +=i

print("sum of even number " ,evenum)
print("Sum of odd number " ,oddnum)
