#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int mod(int num1, int num2);

/**
 * add - add nums
 * @num1: num1
 * @num2: num 2
 *
 * Return: num3
 */
int add(int num1, int num2)
{
   int num3;
   num3 = num1 + num2;
   return (num3);
}

/**
 * sub - sub nums
 * @num1: num1
 * @num2: num 2
 *
 * Return: num3
 */
int sub(int num1, int num2)
{
   int num3;
   num3 = num1 - num2;
   return (num3);
}

/**
 * mul - add nums
 * @num1: num1
 * @num2: num 2
 *
 * Return: num3
 */
int mul(int num1, int num2)
{
   int num3;
   num3 = num1 * num2;
   return (num3);
}

/**
 * div - add nums
 * @num1: num1
 * @num2: num 2
 *
 * Return: num3
 */
int div(int num1, int num2)
{
   int num3;
   num3 = num1 / num2;
   return (num3);
}

/**
 * mod - add nums
 * @num1: num1
 * @num2: num 2
 *
 * Return: num3
 */
int mod(int num1, int num2)
{
   int num3;
   num3 = num1 % num2;
   return (num3);
}
