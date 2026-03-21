class Student:
    subject = "Python" # Class attributes

    @classmethod
    def get_subject(cls):
        return cls.subject

    @classmethod
    def set_subject(cls,new_subject):
        cls.subject = cls.new_subject
        
# calline class method
print(Student.get_subject())
# modifying class attribute using class method
Student.set_subject("Flutter")

print(Student.get_subject())
