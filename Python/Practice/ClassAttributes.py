class Car:
    wheels = 4

    def sample(self,brand,model):
        self.brand=brand
        self.model=model

car1 = Car()
car2= Car()

car1.sample("toyota","carry")
car2.sample("Honda","civic")

print
print(car1.wheels)
print(car2.wheels)

print("Brand with car1 : ", car1.brand)
print("Brand with car2 : ", car2.brand)
