class Student:
    students=[] # class attribute

    def __init__(self, name, age,score=0):
        self.name = name # instance attribute
        self.age = age # instance attribute
        self.score = score # instance attribute
        Student.students.append(self) # refers to the class-level list

    def display_info(self):
        print(f"Name: {self.name}, Age: {self.age}, Score: {self.score}")

    def set_score(self,new_score):
        self.score = new_score

    @staticmethod
    def average_score():
        total = sum(student.score for student in Student.students)
        avg = total/len(Student.students)
        return avg

studentA=Student(name='Anna',age=15)
studentA.set_score(10)

studentB=Student(name='Matti',age=14)
studentB.set_score(8)

studentC=Student(name='Antti',age=16)
studentC.set_score(6)

print(f"Average score: {Student.average_score()}")

