#Given a list of numbers, create a Lambda with a fitting higher-order function 
# to calculate the product of all numbers in the list.

from functools import reduce

numbers=[1.2, 3, 12, 24]
prod_numbers=reduce(lambda x, y: x * y, numbers)

#Alternative
#import math          
#prod_numbers=math.prod(numbers) 
print(prod_numbers)
