
'''
left pyramid
'''

'''for i in range(1,6):
    for j in range(1,i+1):
        print("*",end="")
    print("")'''

for i in range (1,6):
    print("*"*i)

    
'''right pyramid'''

for i in range (1,6):
    print(" "* (9-i),"*"*i)


    

''' pyramid '''

for i in range (1,6):
    print(" "* (9-i)," *"*i)

'''
1
12
123
1234
12345
'''


for i in range(1,6):
    for j in range(1,i+1):
        print(j,end="")
    print("")

'''
1
22
333
4444
55555
'''

for i in range(1,6):
    for j in range(1,i+1):
        print(i,end="")
    print("")

'''
A
AB
ABC
'''

for i in range(65,70):
    for j in range(65,i+1):
        print(chr(j),end="")
    print("")
'''
A
BB
CCC
'''

for i in range(65,70):
    for j in range(65,i+1):
        print(chr(i),end="")
    print("")
