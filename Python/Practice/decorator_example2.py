def validate_name_and_contact(func):
    def wrapper(name, contact_number):
        if not name or not isinstance(name,str):
            return "NAme must be a non - empty string."
        if len(contact_number) != 10 or not contact_number.isdigit():
            return "Contact number must be a 10-digit number."
        return func(name,contact_number)
    return wrapper

@validate_name_and_contact
def register_user(name, contact_number):
    return f"user {name} with contact number{contact_number} has been successfully registered."

print(register_user("Alice","1234567890"))
print(register_user("","1234567890"))
print(register_user("Alice","567890"))
print(register_user("Alice","12abc67890"))
