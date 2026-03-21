def myfun():
    global name
    print("1st",name)
    name="python language"
    print("2nd",name)

name="Python"

myfun()

print("3rd",name)
