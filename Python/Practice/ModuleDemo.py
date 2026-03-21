import udf

while(True):
    print("1. for oddEven")
    print("2. For max of Two")
    print("3. for Max of three")
    print("4. for prime")
    print("5. for fibonacci")
    print("6. Exit")
    print("*"*40)

    choice=int(input("Enter your choice : "))
    print("*"*40)
    if choice==1:
        a=int(input("Enter Number : "))
        udf.oddeven(a)

    elif choice==2:
        a=int(input("Enter Number : "))
        b=int(input("Enter Number : "))
        udf.Maxoftwo(a,b)
    elif choice==3:
        a=int(input("Enter Number : "))
        b=int(input("Enter Number : "))
        c=int(input("Enter Number : "))
        udf.maxofthree(a,b,c)
    elif choice==4:
        a=int(input("Enter Number : "))
        udf.prime(a)
    elif choice==5:
        a=int(input("Enter Number : "))
        udf.fibonacci(a)
    elif choice==6:
        print("Thank You For using our services.")
        break
    else:
        print("Invalid Choice.please try again.")


    print("*"*40)
