from functools import reduce

def multipy(x,y):
    return x*y
l1=[1,2,3,4,5]
result=list(reduce(multipy,l1))

print(result)
