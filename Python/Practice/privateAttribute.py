class BankAccount:
    def __init__(self,account_holder,balance):
        self.account_holder = account_holder
        self.__balance = balance # private attribute

    def get_balance(self):
        return self.__balance # private attribute access by only public method
    def deposite(self,amount):
        if amount>0:
            self.__balance += amount
        else:
            print("Deposite amount must be positive")
    def withdraw(self,amount):
        if 0< amount <= self.__balance:
            self.__balance -= amount
        else:
            print("Invalid withdrwal amount ")
account = BankAccount("Riddhi",1000)
print(account.account_holder)
#print(account.__balance) attribute error: 'bank account ' object has no attribut '__balance'
print(account.get_balance())
account.deposite(500)
print(account.get_balance())
account.withdraw(200)
print(account.get_balance())
#print(account.__BackAccount__balance) # not good practice for access private varible like this
