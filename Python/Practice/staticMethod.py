class Sample:
    like = 0
    score = 10

    @staticmethod
    def addcount(self,count):
        self.score =  self.score  + count
        print(self.score)


obj1 = Sample()
obj1.like += 1
print(obj1.like)

obj1. like +=1
print(obj1.like)
print("----------")

obj2 = Sample()
obj2.like += 1
print(obj2.like)


Sample.addcount(Sample,10)
Sample.addcount(Sample,20)
