#include "unity.h"

/* Modify these two lines according to the project */
#include "calculator_operations.h"
#define PROJECT_NAME  "Scientific_Calculator"


arithmatic arithmatic_operands={0,0};
trignometric trignometric_operands={0};
single_double_inputs double_opearnd={0};
single_int_inputs int_operand={0};

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_sin(void);
void test_cos(void);
void test_tan(void);
void test_cosec(void);
void test_sec(void);
void test_cot(void);
void test_exponent(void);
void test_natural_log(void);
void test_base_10_log(void);
void test_square_root(void);
void test_nth_root(void);
void test_square(void);
void test_nth_power(void);
void test_x_th_power_of_10(void);
void test_factorial(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_sin);
  RUN_TEST(test_cos);
  RUN_TEST(test_tan);
  RUN_TEST(test_cosec);
  RUN_TEST(test_sec);
  RUN_TEST(test_cot);
  RUN_TEST(test_exponent);
  RUN_TEST(test_natural_log);
  RUN_TEST(test_base_10_log);
  RUN_TEST(test_square_root);
  RUN_TEST(test_nth_root);
  RUN_TEST(test_square);
  RUN_TEST(test_nth_power);
  RUN_TEST(test_x_th_power_of_10);
  RUN_TEST(test_factorial);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  arithmatic_operands.operand1=10;
  arithmatic_operands.operand1=20;
  TEST_ASSERT_EQUAL(SUCCESS, add(&arithmatic_operands));
  TEST_ASSERT_EQUAL(30.00, arithmatic_operands.output);
  
  arithmatic_operands.operand1=2.3;
  arithmatic_operands.operand1=-1.2;
  TEST_ASSERT_EQUAL(SUCCESS, add(&arithmatic_operands));
  TEST_ASSERT_EQUAL(1.10, arithmatic_operands.output);
}

void test_subtract(void) {
  arithmatic_operands.operand1=10;
  arithmatic_operands.operand1=20;
  TEST_ASSERT_EQUAL(SUCCESS, subtract(&arithmatic_operands));
  TEST_ASSERT_EQUAL(-10.00, arithmatic_operands.output);
  
  arithmatic_operands.operand1=2.3;
  arithmatic_operands.operand1=-1.2;
  TEST_ASSERT_EQUAL(SUCCESS, subtract(&arithmatic_operands));
  TEST_ASSERT_EQUAL(3.30, arithmatic_operands.output);
}

void test_multiply(void) {
  arithmatic_operands.operand1=10;
  arithmatic_operands.operand1=20;
  TEST_ASSERT_EQUAL(SUCCESS, multiply(&arithmatic_operands));
  TEST_ASSERT_EQUAL(200.00, arithmatic_operands.output);
  
  arithmatic_operands.operand1=2.3;
  arithmatic_operands.operand1=-1.2;
  TEST_ASSERT_EQUAL(SUCCESS, multiply(&arithmatic_operands));
  TEST_ASSERT_EQUAL(-2.76, arithmatic_operands.output);
}

void test_divide(void) {
  arithmatic_operands.operand1=20;
  arithmatic_operands.operand1=10;
  TEST_ASSERT_EQUAL(SUCCESS, divide(&arithmatic_operands));
  TEST_ASSERT_EQUAL(30, arithmatic_operands.output);
  
  arithmatic_operands.operand1=2.3;
  arithmatic_operands.operand1=-1.2;
  TEST_ASSERT_EQUAL(SUCCESS, divide(&arithmatic_operands));
  TEST_ASSERT_EQUAL(-1.92, arithmatic_operands.output);

//  we are assuming output=0 for operand=0
  arithmatic_operands.operand1=2.3;
  arithmatic_operands.operand1=0;
  TEST_ASSERT_EQUAL(ERROR_DIVISION_BY_ZERO, divide(&arithmatic_operands));
  TEST_ASSERT_EQUAL(0, arithmatic_operands.output);
}
