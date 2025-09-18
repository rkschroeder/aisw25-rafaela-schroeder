import math

numb_square=lambda x:x**2
print(numb_square(4))

length_vector=lambda x,y,z: math.sqrt(x**2+y**2+z**2)
print(length_vector(4,4,2))

odd_or_even=lambda x: "Even" if x%2==0 else "Odd" 
print(odd_or_even(3))
print(odd_or_even(2))



