class Student:
    def sample(self,name,age):
        self.name = name
        self.age = age

    def describe(self):
        return f"{self.name} is {self.age} years old."

student  = Student()
student.sample("Jigar",40)
print(student.describe())
