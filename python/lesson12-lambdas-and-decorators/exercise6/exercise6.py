#Generate a list of squares for numbers from 1 to 10 using a Lambda.

numbers = list(range(1, 11))
squares_numbers=list(map(lambda x: x**2, numbers))
print(squares_numbers)