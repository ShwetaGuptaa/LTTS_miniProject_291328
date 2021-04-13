#include <stdio.h>
#include<math.h>
#include "calculator_operations.h"

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float sine(float operand){
    return sin(operand);
}
float Cos(float operand){
    return cos(operand);
}
float Tan(float operand){

    return tan(operand);
}
float Cot(float operand){
    if(tan(operand==0))
        return INT_MAX*1.0;
    else
        return 1/tan(operand);
}
float Sec(float operand){
    if(cos(operand==0))
        return INT_MAX*1.0;
    else
        return 1/cos(operand);
}
float Cosec(float operand){
    if(sin(operand==0))
        return INT_MAX*1.0;
    else
        return 1/sin(operand);
}
float sin_inverse(float operand){
    return asin(operand);
}
float cos_inverse(float operand){
    return acos(operand);
}
float tan_inverse(float operand){
    return atan(operand);
}
float Exponent(float operand){
    return exp(operand);
}
float Natural_log(float operand){
    return log(operand);
}
float base_10_log(float operand){
    return log10(operand);
}

float square_root(float operand){
    return sqrt(operand);
}
float nth_root(float operand,int root){
    return pow(operand,(1/((1.0* root)))) ;
}
float square(float operand){
    return pow(operand,2);
}
float nth_power(float operand, float power){
    return pow(operand,power);
}
float xth_power_of_10(float power){
    return pow(10,power);
}
int factorial(int operand){
    if(operand==0){
        return 1;
    }else{
        return operand*factorial(operand-1);
    }
}
