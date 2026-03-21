import random

num=random.randint(1,20)

while True:
    guess=int(input("Guess a number between 1 to 20 : "))
    if guess==num:
        print("You guesse A correct number")
        break
    elif guess>num:
        print("you gussed A greater number")
    elif guess<num:
        print("you gussed A smaller number")
