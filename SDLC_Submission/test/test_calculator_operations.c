#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_square(void);
void test_prime(void);
void test_smaller(void);
void test_greater(void);
void test_factorial(void);
void test_modulus(void);
void test_squareroot(void);
void test_sinvalue(void);
void test_cosvalue(void);
void test_tanvalue(void);
void test_centitometer(void);
void test_metertocenti(void);
void test_metertokm(void);
void test_kmtometer(void);
void test_centitoinch(void);
void test_inchtocenti(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "smaller", test_smaller);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "sinvalue", test_sinvalue);
  CU_add_test(suite, "cosvalue", test_cosvalue);
  CU_add_test(suite, "tanvalue", test_tanvalue);
  CU_add_test(suite, "centitometer", test_centitometer);
  CU_add_test(suite, "metertocenti", test_metertocenti);
  CU_add_test(suite, "metertokm", test_metertokm);
  CU_add_test(suite, "kmtometer", test_kmtometer);
  CU_add_test(suite, "inchtocenti", test_inchtocenti);
  CU_add_test(suite, "centitoinch", test_centitoinch);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_power(void) {
  CU_ASSERT(100 == power(10, 2));
  
  /* Dummy fail*/
  CU_ASSERT(3 == power(2, 2));
}

void test_square(void) {
  CU_ASSERT(100 == square(10));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == square(25));
}

void test_prime(void) {
  CU_ASSERT(1 == prime(89));
  CU_ASSERT(-1 == prime(-12))
  
  /* Dummy fail*/
  CU_ASSERT(0 == prime(97));
}

void test_smaller(void) {
  CU_ASSERT(10 == smaller(10,20));
  
  /* Dummy fail*/
  CU_ASSERT(25 == smaller(25,5));
}

void test_greater(void) {
  CU_ASSERT(20 == greater(10,20));
  
  /* Dummy fail*/
  CU_ASSERT(5 == greater(25,5));
}

void test_factorial(void) {
  CU_ASSERT(6 == factorial(3));
  CU_ASSERT(-1 == factorial(-12))
  
  /* Dummy fail*/
  CU_ASSERT(10 == factorial(97));
}

void test_modulus(void) {
  CU_ASSERT(5 == modulus(105,10));
  
  /* Dummy fail*/
  CU_ASSERT(5 == modulus(25,5));
}

void test_squareroot(void) {
  CU_ASSERT(3 == squareroot(9));
  
  /* Dummy fail*/
  CU_ASSERT(1 == squareroot(100));
}

void test_sinvalue(void) {
  CU_ASSERT(0 == sinvalue(0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == sinvalue(12));
}

void test_cosvalue(void) {
  CU_ASSERT(1 == cosvalue(0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == cosvalue(12));
}

void test_tanvalue(void) {
  CU_ASSERT(1 == tanvalue(45));
  
  /* Dummy fail*/
  CU_ASSERT(1 == tanvalue(12));
}

void test_metertocenti(void) {
  CU_ASSERT(1200 == metertocenti(12));
  
  /* Dummy fail*/
  CU_ASSERT(1 == metertocenti(12));
}


void test_centitometer(void) {
  CU_ASSERT(12 == centitometer(1200));
  
  /* Dummy fail*/
  CU_ASSERT(1 == centitometer(12));
}

void test_kmtometer(void) {
  CU_ASSERT(1000 == kmtometer(1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == kmtometer(12));
}

void test_metertokm(void) {
  CU_ASSERT(1 == metertokm(1000));
  
  /* Dummy fail*/
  CU_ASSERT(1 == metertokm(12));
}

void test_centitoinch(void) {
  CU_ASSERT(100 == centitoinch(254));
  
  /* Dummy fail*/
  CU_ASSERT(1 == centitoinch(12));
}

void test_inchtocenti(void) {
  CU_ASSERT(254 == inchtocenti(100));
  
  /* Dummy fail*/
  CU_ASSERT(1 == inchtocenti(12));
}
