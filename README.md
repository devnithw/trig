# Trig
A trigonometry math library with high precision written in C

### Math under the hood
The sine library is implemented using a simple for loop. The mathematical theorem used here is Maclaurin series for the Sine function. 
The for loop iterates from 0 to the preffered accuracy integer. The more the accuracy integer, the more elements are added in the sigma function therfore the more precise the return value will be.
The sine function uses an abstract function called fact() to calculate the factorial of a given integer.

The factorial function is implemented recursively.

## double sine(double X, int ACCURACY)
Takes a double and an accuracy integer as inputs and returns a double.

## double cosine(double X, int ACCURACY)
Takes a double and an accuracy integer as inputs and returns a double.
Implemented using the sine() function and using the value of Pi.

## double tangent(double X, int ACCURACY)
Takes a double and an accuracy integer as inputs and returns a double.
Implemented using both the sine() and cosine() functions.
Returns a more accurate value when ACCURACY is higher.
Returns 1.00 as a double when X = PI / 2 and prints "Not defined"
