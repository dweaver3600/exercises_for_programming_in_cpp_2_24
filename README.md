# exercises_for_programming_in_cpp_2_24
exercise 2.24 from Exercises for Programming in C++

2.24 (a) Write a function str_to_int that converts a C-style string representing a signed integer (i.e., a string
consisting of a possible plus or minus sign followed by one or more digits) to its corresponding numeric
value. The function should take a single parameter that is a pointer to the C-style string of digits and return
an int. If the string is not formatted correctly, the value zero should be returned.
(b) Write a program to test the str_to_int function. Also, test the str_to_int function with the program
below.

#include <iostream>

// Place the code for the str_to_int function here.

int main()

{

const char s[] = "123";

std::cout << str_to_int(s) << "\n";

}
