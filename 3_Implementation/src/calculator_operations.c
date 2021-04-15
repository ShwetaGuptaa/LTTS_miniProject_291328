#include <stdio.h>
#include<math.h>
#include "calculator_operations.h"

const double PI=3.141592;

error_t add(arithmatic* data)
{
   data->output=data->operand1+data->operand2;
   return SUCCESS;
}

error_t subtract(arithmatic* data)
{
   data->output=data->operand1-data->operand2;
   return SUCCESS;
}

error_t multiply(arithmatic* data)
{
   data->output=data->operand1*data->operand2;
   return SUCCESS;
}

error_t divide(arithmatic* data)
{
    if(0 == data->operand2){
        data->output=0;
        return ERROR_DIVISION_BY_ZERO;  
    }
    else{
        data->output=data->operand1/data->operand2;
        return SUCCESS;
        }
}
error_t sine(trignometric* data){
    
    data->output=sin(data->operand*(PI/180));
    return SUCCESS; 
}
error_t Cos(trignometric* data){
    data->output=cos(data->operand*(PI/180));
    return SUCCESS;
}
error_t Tan(trignometric* data){
    if(((int)(data->operand)/90)%2==1){
        data->output=INT_MAX*1.0;
        return UNDEFINED;  
    }else{
    data->output=tan(data->operand*(PI/180));
    return SUCCESS;
    }

}
error_t Cot(trignometric* data){
    if(tan(data->operand*(PI/180))==0){
        data->output=INT_MAX*1.0;
        return UNDEFINED;
    }     
    else if(((int)(data->operand)/90)%2==1){
        data->output=0;
        return SUCCESS;  
    }else{
    data->output=1/(tan(data->operand*(PI/180)));
    return SUCCESS;
    }
}
error_t Sec(trignometric* data){
    if(cos(data->operand*(PI/180))==0){
        data->output=INT_MAX*1.0;        
        return UNDEFINED;
    }   
    else{
    data->output=1/(cos(data->operand*(PI/180)));
    return SUCCESS;
    }
}
error_t Cosec(trignometric* data){
    if(sin(data->operand*(PI/180))==0){
        data->output=INT_MAX*1.0;
        return UNDEFINED;
    }
    else{
    data->output=1/(sin(data->operand*(PI/180)));
    return SUCCESS;
    }
}
error_t Exponent(single_double_inputs* data){
    data->output=exp(data->operand);
    return SUCCESS;
}
error_t Natural_log(single_double_inputs* data){
    if(data->operand<0){
        data->output=0;
        return UNDEFINED;
    }else{
        data->output=log(data->operand);
        return SUCCESS;
    }
    
}
error_t base_10_log(single_double_inputs* data){
        if(data->operand<0){
        data->output=0;
        return UNDEFINED;
    }else{
    data->output=log10(data->operand);
    return SUCCESS;
    }
}

error_t square_root(single_double_inputs* data){
    if(data->operand<0){
        data->output=0;
        return UNDEFINED;
    }else{
        data->output=sqrt(data->operand);
        return SUCCESS;  
    }

}
error_t nth_root(arithmatic* data){
    if((int)(data->operand2)%2==0){
        data->output=0;
        return UNDEFINED;
    }
    data->output=pow(data->operand1,(1/data->operand2)) ;
    return SUCCESS;
}
error_t square(single_double_inputs* data){
    data->output=pow(data->operand,2);
    return SUCCESS;
}
error_t nth_power(arithmatic* data){
    data->output=pow(data->operand1,data->operand2);
    return SUCCESS;
}
error_t xth_power_of_10(single_double_inputs* data){
    data->output=pow(10,data->operand);
    return SUCCESS;
}
error_t factorial(single_int_inputs* data){
    if(data->operand<0){
        data->output=0;
        return FAILURE;
    }else{
    data->output=1;
    unsigned int temp_var=data->operand;
    while(temp_var>0){
        data->output=data->output*temp_var;
        temp_var--;
    }
    return SUCCESS;}
}
