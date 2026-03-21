l1=(1,2,3,4,5,6)

result =map(lambda x: (x**3,"Even" if (x**3)%2==0 else "odd"),l1)
print(list(result))
