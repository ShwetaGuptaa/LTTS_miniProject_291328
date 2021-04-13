#include"calculator_operations.h"
#include<stdio.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
float calculator_operand=0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE,SIN,COS,TAN, COSEC, SEC,COT,EXP, NATURAL_LOG, BASE_10_LOG ,SQUARE_ROOT, SQUARE,  xth_POWER_of_10, EXIT };

int (*arithmatic_function[4])(int,int)={add,subtract,multiply,divide};
// arithmatic_function={add,subtract,multiply,divide};
char arithmatic_symbol[4][3]={"+","-","*","/"};

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


float (*trignometric_function[6])(float)={sine,Cos,Tan,Cosec,Sec,Cot};
// trignometric_function={sine,Cos,Tan,Cosec,Sec,Cot};
char trignometric_symbol[6][10]={"sin","cos","tan","cosec","sec","cot"};

float (*other_functions[6])(float)={Exponent, Natural_log, base_10_log ,square_root, square,  xth_power_of_10};
// trignometric_function={sine,Cos,Tan,Cosec,Sec,Cot};
char other_function_symbol[6][12]={"e^","ln","log10","square root","square","10^"};

/* Start of the application */
int main(int argc, char *argv[])
{
    
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\t5. sin()\t8. cosec()\n2. Subtract\t6. cos()\t9. sec()\n3. Multiply\t7. tan()\t10. cot()\n4. Divide");
    printf("\n11. exp()\t12. ln()\n13. log10()\t14. square root()\n15. square\t16. 10^x\n17. Exit");
    printf("\n\tEnter your choice\n");
   
    //  __fpurge(stdin);
    scanf("%d", &calculator_operation);


    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

     if(INVALID != valid_operation(calculator_operation) && calculator_operation<=4)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        // __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
        printf("\n\t%d %s %d = %d\n\n\nEnter to continue", 
            calculator_operand1,arithmatic_symbol[calculator_operation-1], calculator_operand2,
            (arithmatic_function[calculator_operation-1]) (calculator_operand1, calculator_operand2));

    }else  if(INVALID != valid_operation(calculator_operation) &&( calculator_operation>4 && calculator_operation<=10) ){
        printf("\n\tEnter your Number\n");
        // __fpurge(stdin);
        scanf("%f", & calculator_operand);
        printf("\n\t%s(%f) = %f\n\n\nEnter to continue", 
            trignometric_symbol[calculator_operation-5],calculator_operand, 
            (trignometric_function[calculator_operation-5]) (calculator_operand));

    }
    else  if(INVALID != valid_operation(calculator_operation) && calculator_operation>10)
    {
        printf("\n\tEnter your Number\n");
        // __fpurge(stdin);
        scanf("%f", &calculator_operand);
        printf("\n\t%s(%f) = %f\n\n\nEnter to continue", 
            other_function_symbol[calculator_operation-11],calculator_operand, 
            (other_functions[calculator_operation-11]) (calculator_operand));
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    // switch(calculator_operation)
    // {
    //     case ADD:
    //         printf("\n\t%d + %d = %d\nEnter to continue", 
    //         calculator_operand1, 
    //         calculator_operand2,
    //         add(calculator_operand1, calculator_operand2));
            
    //         // __fpurge(stdin);
    //         getchar();
    //         break;
    //     case SUBTRACT:
    //         printf("\n\t%d - %d = %d\nEnter to continue", 
    //         calculator_operand1, 
    //         calculator_operand2,
    //         subtract(calculator_operand1, calculator_operand2));
            
    //         // __fpurge(stdin);
    //         getchar();
    //         break;
    //     case MULTIPLY:
    //         printf("\n\t%d * %d = %d\nEnter to continue", 
    //         calculator_operand1, 
    //         calculator_operand2,
    //         multiply(calculator_operand1, calculator_operand2));
            
    //         // __fpurge(stdin);
    //         getchar();
    //         break;
    //     ;
    //     case SIN:
    //         printf("\n\tsin(%f) = %f\nEnter to continue", 
    //         calculator_operand, 
    //         sine(calculator_operand));
    //         // printf("%f",calculator_operand);
            
    //         // __fpurge(stdin);
    //         getchar();
    //         break;

    //     case 6:
    //         exit(0);
    //         break;
    //     default:
    //         printf("\n\t---It should never come here---\n");
    // }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}