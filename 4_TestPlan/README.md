# TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Arthimetic Operations | Choice | SUCCESS | SUCCESS |
|  H_02       | Trignometric Operations | Choice | SUCCESS | SUCCESS |
|  H_03       | other Mathematical Operations | Choice| SUCCESS | SUCCESS |

## Table no: Low level test plan

| **Test ID** | **HL_ID** | **Description**   | **Exp Input** | **Exp Output** | **Actual Output** |
|-------------|-----------|---------------------------|------------|-------------|----------------|
|  L_01       | H_01 | Performing Addition | (20,10) | 30 | 30 | 
|  L_02       | H_01 | Performing Addition | (2.3,-1.2) | 1.10 | 1.10 | 
|  L_03       | H_01 | Performing Subtraction | (10,20) | -10 | -10 | 
|  L_04       | H_01 | Performing Subtraction | (2.3,-1.2) | 3.30 | 3.30 | 
|  L_05       | H_01 | Performing Multiplication | (10,20) | 200 | 200 | 
|  L_06       | H_01 | Performing Multiplication | (2.3,-1.2) | -2.76 | -2.76 |  
|  L_07       | H_01 | Performing Division | (20,10) | 2 | 2 | 
|  L_08       | H_01 | Performing Division | (2.3,0) | ERROR_DIVISION_BY_ZERO 0 | ERROR_DIVISION_BY_ZERO 0| 
|  L_09       | H_01 | Performing Division | (2.3,-1.2) | -1.92 | -1.92 | 
|  L_10       | H_02 | Performing Sin | 30 | 0.5 | 0.5 | 
|  L_11       | H_02 | Performing Sin | -60 | -0.87 | -0.87 | 
|  L_12       | H_02 | Performing Cos | 30 | 0.87 | 0.87 | 
|  L_13       | H_02 | Performing Cos | -60 | 0.5 | 0.5 | 
|  L_14       | H_02 | Performing Tan | 30 | 0.58 | 0.58 | 
|  L_15       | H_02 | Performing Tan | -60 |-1.73  | -1.73 | 
|  L_16       | H_02 | Performing Tan | 90 | UNDEFINED | UNDEFINED | 
|  L_17       | H_02 | Performing Cot | 30 | 1.73 | 1.73 | 
|  L_18       | H_02 | Performing Cot | 0 | UNDEFINED  | UNDEFINED  | 
|  L_19       | H_02 | Performing Sec | 30 | 1.15 | 1.15 | 
|  L_20       | H_02 | Performing Sec | 90 | UNDEFINED | UNDEFINED | 
|  L_21       | H_02 | Performing Cosec | 30 | 2 | 2 | 
|  L_22       | H_02 | Performing Cosec | 0 | UNDEFINED | UNDEFINED | 
|  L_23       | H_03 | Performing exponent | (2) | 7.39 | 7.39 | 
|  L_24       | H_03 | Performing natural log | 2 | 0.69 | 0.69 | 
|  L_25       | H_03 | Performing natural log | -3 | UNDEFINED | UNDEFINED |
|  L_26       | H_03 | Performing Square root | 2 | 1.41 | 1.41 | 
|  L_28       | H_03 | Performing Square root | -3 | UNDEFINED | UNDEFINED | 
|  L_29       | H_03 | Performing nth root | (8,5) | 1.52 | 1.52 | 
|  L_30       | H_03 | Performing nth root | (-3,4) | UNDEFINED | UNDEFINED |
|  L_31       | H_03 | Performing Square | 2 | 4 | 4 | 
|  L_32       | H_03 | Performing nth Square | (8,5) | 32768.00 | 32768.00 | 
|  L_33       | H_03 | Performing xth power of 10 | 2.3 | 199.53| 199.53 |
|  L_34       | H_03 | Performing Log10 | -3 |UNDEFINED | UNDEFINED| 
|  L_35       | H_03 | Performing Log10 | -2| 0.3| 0.3 | 
|  L_36       | H_03 | Performing Factorial | 0 | 1 | 1 | 
|  L_37       | H_03 | Performing Factorial | 5 | 120 | 120 |
