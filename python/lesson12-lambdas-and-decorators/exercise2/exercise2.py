class Person:
    def __init__(self, name, score, age):
        self.name = name
        self.score = score
        self.age = age
    def __repr__(self):
        return repr((self.name, self.score, self.age))

people = [ 
    Person('Charlie',90,20),
    Person('Alice',85,21),
    Person('Diana',80,21),
    Person('Bob',75,20),
    ]

# a) Sort the list by age with a Lambda. 
sort_people=sorted(people, key=lambda person: person.age)
print(sort_people)

# b) Sort the list by age, but if the age is the same, sort in alphabetical order.
sort_people=sorted(people, key=lambda person: (person.age, person.name))
print(sort_people)