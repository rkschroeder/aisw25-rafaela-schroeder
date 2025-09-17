class Student:
    def __init__(self, name, age,score=0):
        self.name = name
        self.age = age
        self.score = score

    def display_info(self):
        print(f"Name: {self.name}, Age: {self.age}, Score: {self.score}")

    def set_score(self,new_score):
        self.score = new_score

studentA=Student(name='Anna',age=15)
studentA.display_info()
studentA.set_score(10)
studentA.display_info()
