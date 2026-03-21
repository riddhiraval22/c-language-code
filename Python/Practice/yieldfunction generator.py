def fibonacci(n):
    a,b=0,1
    for i in range(n):
        yield a
        a,b=b,a+b

fib=fibonacci(15)

print(fib)

for num in fib:
    print(num,end=" ")
