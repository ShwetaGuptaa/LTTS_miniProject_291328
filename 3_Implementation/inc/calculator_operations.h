/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
// #include <stdio_ext.h>

// typedef struct{
//     int operand1;
//     int operand2;
//     char symbol [10];
// }arithmatic;
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);
/**
 * @brief 
 * 
 * @param operand 
 * @return double 
 */
float sine(float operand);
float Cos(float operand);
float Tan(float operand);
float Cot(float operand);
float Sec(float operand);
float Cosec(float operand);
float sin_inverse(float operand);
float cos_inverse(float operand);
float tan_inverse(float operand);
float Exponent(float operand);
float Natural_log(float operand);
float base_10_log(float operand);
float square_root(float operand);
float nth_root(float operand,int root);
float square(float operand);
float nth_power(float operand, float power);
float xth_power_of_10(float power);
int factorial(int operand);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */