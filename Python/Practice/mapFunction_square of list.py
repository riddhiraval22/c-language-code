l1=[1,2,3,4,5]

def square(n):
    return n*n

l2=list(map(square,l1))
print(l2)


squared_number= map(lambda x: x**2 ,l1)

print(list(squared_number))


quater_number = map(lambda x: x **3 ,l1)

print(list(quater_number))
