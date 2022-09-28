#include "calculator.h"

//good functions 

//adding of two numbers
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

//substracting of variables
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

//product of two numbers adding 0.5
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
