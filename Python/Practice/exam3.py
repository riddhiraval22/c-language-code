dic={1:1,2:2,3:3,4:4,5:5,6:5,7:7,8:3,9:2,10:10}
#result=[]
#result=dic.values()
ans={}

for i in dic.values():
    ans[i]=ans.get(i,0) + 1
for x,y in  ans.items():
    if y>1:
        print(x,":",y)

