import json

user_data={}

user_data["name"]= input("Enter Your name : ")
user_data["age"]= input("Enter Your age : ")
user_data["city"]= input("Enter Your city : ")

with open("user_data.json","w") as file:
    json.dump(user_data,file,indent = 4)

print("DATA ADDED!!")

print("json data file content")
data=open("user_data.json","r")
print(data.read())
data.close()
