# Given a list of temperatures in Fahrenheit, 
# Create a Lambda with a fitting higher-order function to convert the temperatures to Celsius.

temp_fahr=[50,-10, 18, 31, -5, -33]


# Takes a function as the first argument (lambda f: (f - 32)/1.8)
# Takes an iterable as the second argument (temp_fahr)
# Applies the function to each element of the iterable
# Returns a map object (which is an iterator over the results)
temp_celsius=list(map(lambda f: (f - 32)/1.8, temp_fahr))
print(temp_celsius)

# Alternative: temp_celsius = [(f - 32)/1.8 for f in temp_fahr]