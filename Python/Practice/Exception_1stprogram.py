print("start code")

try:
    a=int(input("Enter A : "))
    b=int(input("Enter B : "))
    c=a/b
    print("Division : " ,c)
    l=[10,20,30,40,50]
    index=int(input("Enter Index Number To Fetch Element: "))
    print("Element : ",l[index])

'''
except ZeroDivisionError as e:
    print("Exception caught : ",e)
except ValueError as e:
    print("Exception caught : ",e)
except IndexError as e:
    print("Exception caught : ",e)
'''


except Exception as e:
    print("Exception caught : ",e)

print("End code")
