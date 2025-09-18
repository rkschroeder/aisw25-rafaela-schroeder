# Given a list of numbers, create a Lambda with a fitting higher-order function 
# to return only the even numbers.

numbers = [1, 2, 3, 4, 5, 6]
a = list(filter(lambda x: x %2 == 0, numbers))
print(a)