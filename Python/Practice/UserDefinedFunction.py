#Function with no argument & no return value.

def pritnLine():
    print("*"*50)

pritnLine()
print("Welcome to User Defined Function In python")
pritnLine()

#Function with Argument But No return Value.

def add(a,b):
    print("Addition : ",a+b)

pritnLine()
add(10,20)
pritnLine()

#Function with Argument & return Value.

def sub(a,b):
    return a-b
pritnLine()
ans=sub(10,20)
print("Subtraction : ",ans)
pritnLine()
