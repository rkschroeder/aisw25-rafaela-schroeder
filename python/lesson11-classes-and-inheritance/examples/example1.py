class Shape:
    width = 30           # Class variable

    def __init__(self, width): # Object constructor 
        self.width = width

    def __str__(self): # String representation of an object i
        return f"Shape with width {self.width}"
    
    def area(self):     # Method
        return self.width**2

s1 = Shape(10)
print(s1)
