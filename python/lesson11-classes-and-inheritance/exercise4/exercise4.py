class Robot():
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def report(self):
        print(f"Coordinates: ({self.x}, {self.y})")

    def move(self,direction):
        if direction=="N":
            self.y+=1
        elif direction=="S":
            self.y-=1
        elif direction=="E":
            self.x+=1
        elif direction=="W":
            self.x-=1 
        else:
            print("Error. Invalid input")       

rob = Robot()
rob.report()    
rob.move("N")
rob.report()    
rob.move("E")
rob.report()    
rob.move("S")
rob.report()    
rob.move("W")
rob.report()    
