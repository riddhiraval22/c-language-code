file=open("tops.txt","w")
file.write("this is file management demo using python.")
file.close()
print("File written successfully")

print("*"*50)

file=open("tops.txt","r")
print(file.read())
file.close()

print("*"*50)

file=open("tops.txt","a")
file.write("\n Now this file is apped")
file.close()

print("*"*50)

file=open("tops.txt","r")
print(file.read())
file.close()

print("*"*50)

file=open("tops.txt","w+")
file.write("This is W+ operation")
print("current file position : ",file.tell())
file.seek(0)
print("File data: " ,file.read())
file.close()

print("*"*50)

