class User: 
    def __init__(self, name, age):
        self.name = name 
        self.age = age 

class Teacher (User): # now this class inherit from User
    all_teachers = [] 
    def __init__(self, name, age):
        super().__init__(name,age)
        self.subjects = []
        Teacher.all_teachers.append(self)

    def add_subjects(self,new_subject):
        self.subjects.append(new_subject)    

class Student(User): # now this class inherit from User
    students=[]
    def __init__(self, name, age, score=0):
        self.score = score
        super().__init__(name,age)
        Student.students.append(self)

    def display_info(self):
        print(f"Name: {self.name}, Age: {self.age}, Score: {self.score}")

    def set_score(self,new_score):
        self.score = new_score

    @staticmethod
    def average_score():
        total = sum(student.score for student in Student.students)
        avg = total/len(Student.students)
        return avg


# Students
studentA=Student('Anna',15)
studentA.set_score(10)

studentB=Student('Matti',14)
studentB.set_score(8)

studentC=Student('Antti',16)
studentC.set_score(6)

print(f"Average score: {Student.average_score()}")

# Teachers
teacherA=Teacher('Markku',58)
teacherA.add_subjects('Chemistry')
teacherA.add_subjects("Physics")

teacherB=Teacher(name='Eeva',age=40)
teacherB.add_subjects('Literature')
teacherB.add_subjects('History')

for t in Teacher.all_teachers:
    print(f"{t.name} teaches: {', '.join(t.subjects)}")


