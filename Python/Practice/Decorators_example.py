def my_decorator(func):
        print("Before caling the fucntion")
        func()
        print("After calling the function")
'''
    def wrappeer():
        print("Before caling the fucntion")
        func()
        print("After calling the function")
    return wrappeer
'''
@my_decorator
def say_hello():
    print("Hello, world!")

say_hello()
