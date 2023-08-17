#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - return the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: differnce of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second nuber
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returns the remainder after division
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
return (a % b);
}
