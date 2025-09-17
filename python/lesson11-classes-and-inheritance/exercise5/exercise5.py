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

class FlexibleRobot(Robot):
    def __init__(self,x=0,y=0):
        super().__init__(x,y)

    def move(self,direction):
        if direction=="NE":
            self.x+=1
            self.y+=1
        elif direction=="NW":
            self.x-=1
            self.y+=1
        elif direction=="SE":
            self.x=1
            self.y-=1
        elif direction=="SW":
            self.x-=1
            self.y-=1 
        else:
            super().move(direction)


rob = FlexibleRobot()
rob.report() 
rob.move("E")
rob.report()    
rob.move("E")
rob.report()
rob.move("NE")
rob.report()    
rob.move("NE")
rob.report()    

