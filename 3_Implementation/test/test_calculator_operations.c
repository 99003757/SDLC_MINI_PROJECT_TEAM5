#include "unity.h"
#include <trigono.h>
#include <conversion.h>
#include <Base_Conversion.h>
#include <basic.h>

/* Modify these two lines according to the project */
#include <trigono.h>
#include <conversion.h>
#include <Base_Conversion.h>
#include <basic.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
/*
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
*/
///////////99003761////////////
void test_temp_C_F(void);
void test_temp_F_C(void);
void test_Len_M_F(void);
void test_Len_F_M (void);
void test_current_DC_AC(void);
void test_current_AC_DC(void);

//99003757
void test_trigsin(void);
void test_trigcos(void);
void test_trigtan(void);
void test_trigsec(void);
void test_trigcot(void);
void test_trigcosec(void);

void test_trigsin1(void);
void test_trigcos1(void);
void test_trigtan1(void);
void test_trigsec1(void);
void test_trigcot1(void);
void test_trigcosec1(void);






//Prototype for Base conversion functions
void test_convert_dec_to_bin(void);
void test_convert_bin_to_dec(void);
void test_convert_dec_to_oct(void);
void test_convert_oct_to_dec(void);


//99003759
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
//void test_square(void);



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
  //RUN_TEST(test_add);
  //RUN_TEST(test_add_testcase2);
  //RUN_TEST(test_subtract);
  //RUN_TEST(test_multiply);
  //RUN_TEST(test_divide);
  /////////99003761//////
  RUN_TEST(test_temp_C_F);
  RUN_TEST(test_temp_F_C);
  RUN_TEST(test_Len_M_F);
  RUN_TEST(test_Len_F_M);
  RUN_TEST(test_current_DC_AC);
  RUN_TEST(test_current_AC_DC);
  
  RUN_TEST(test_trigsin);
  RUN_TEST(test_trigcos);
  RUN_TEST(test_trigtan);
  RUN_TEST(test_trigsec);
  RUN_TEST(test_trigcosec);
  RUN_TEST(test_trigcot);
    
  RUN_TEST(test_trigsin1);
  RUN_TEST(test_trigcos1);
  RUN_TEST(test_trigtan1);
  RUN_TEST(test_trigsec1);
  RUN_TEST(test_trigcosec1);
  RUN_TEST(test_trigcot1);

//Run test for Base conversions
  RUN_TEST(test_convert_dec_to_bin);
  RUN_TEST(test_convert_bin_to_dec);
  RUN_TEST(test_convert_dec_to_oct);
  RUN_TEST(test_convert_oct_to_dec);
  /* Close the Unity Test Framework */
  
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  //RUN_TEST(test_square);
  return UNITY_END();
}

/* 
Write all the test functions 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
*/
///////////////////////////////99003761 Test_Case//////////////////////////////////////////////////////////
void test_temp_C_F(void)
{
  TEST_ASSERT_EQUAL(96.6200, temp_C_F(35.9));
  TEST_ASSERT_EQUAL(140.00, temp_C_F(60));
}

void test_temp_F_C(void)
{
  TEST_ASSERT_EQUAL(62.7777, temp_F_C(145));
  TEST_ASSERT_EQUAL(36.444443, temp_F_C(97.6));
  TEST_ASSERT_EQUAL(35.9, temp_F_C(96.62));
}

void test_Len_M_F(void)
{
  TEST_ASSERT_EQUAL(8.2021, Len_M_F(2.5));
  TEST_ASSERT_EQUAL(9.8425, Len_M_F(3));
}
void test_Len_F_M (void)
{
  TEST_ASSERT_EQUAL(3.048,Len_F_M(10));
  TEST_ASSERT_EQUAL(2.49,Len_F_M(8.2));
}
void test_current_DC_AC(void)
{
  TEST_ASSERT_EQUAL(15.723,current_DC_AC(10));
  TEST_ASSERT_EQUAL(19.654,current_DC_AC(12.5));
}
void test_current_AC_DC(void)
{
  TEST_ASSERT_EQUAL(12.7200,current_AC_DC(20));
  TEST_ASSERT_EQUAL(9.99,current_AC_DC(15.723));
}

///////////////////////////////99003757 Test_Case//////////////////////////////////////////////////////////

void test_trigsin(void) {
  TEST_ASSERT_EQUAL(-0.98803162409,  sine_fun(30));
}

void test_trigcos(void) {
  TEST_ASSERT_EQUAL(0.15425144988, cosine_fun(30));
}


void test_trigtan(void) {
  TEST_ASSERT_EQUAL(-6.40533119665, tan_fun(30)); }


void test_trigsec(void) {
  TEST_ASSERT_EQUAL(6.482921235, sec_fun(30));}


void test_trigcosec(void) {
  TEST_ASSERT_EQUAL(-1.01211353,cosec_fun(30));}

void test_trigcot(void) {
  TEST_ASSERT_EQUAL(-0.156119952,  cot_fun(30));}


void test_trigsin1(void) {
  TEST_ASSERT_EQUAL(-0.304810621,  sine_fun(60));
  TEST_ASSERT_EQUAL(-0.801152636,  sine_fun(180));
}

void test_trigcos1(void) {
  TEST_ASSERT_EQUAL(-0.952412980, cosine_fun(60));
  TEST_ASSERT_EQUAL(-0.598460069, cosine_fun(180));
}


void test_trigtan1(void) {
  TEST_ASSERT_EQUAL(0.320040389, tan_fun(60)); 
  TEST_ASSERT_EQUAL(1.338690210, tan_fun(180));
  }


void test_trigsec1(void) {
  TEST_ASSERT_EQUAL(-1.049964690, sec_fun(60));
  TEST_ASSERT_EQUAL(-1.670955260, sec_fun(180));}


void test_trigcosec1(void) {
  TEST_ASSERT_EQUAL(-3.280725574,cosec_fun(60));
  TEST_ASSERT_EQUAL(-1.248201598,cosec_fun(180));
  }

void test_trigcot1(void) {
  TEST_ASSERT_EQUAL(3.124605622,  cot_fun(60));
   TEST_ASSERT_EQUAL(0.746998814,  cot_fun(180));
  }





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Test cases for Decimal to Binary 
void test_convert_dec_to_bin(void) {
  TEST_ASSERT_EQUAL(101,  convert_dec_to_bin(5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1010,  convert_dec_to_bin(10));
}

//Test Cases for Binary to decimal

void test_convert_bin_to_dec(void) {
  TEST_ASSERT_EQUAL(2, convert_bin_to_dec(10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, convert_bin_to_dec(100));
}

//Test cases for Decimal to octal

void test_convert_dec_to_oct(void) {
  TEST_ASSERT_EQUAL(11, convert_dec_to_oct(9));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(21, convert_dec_to_oct(17));
}

//Test cases Octal to Decimal 
void test_convert_oct_to_dec(void) {
  TEST_ASSERT_EQUAL(13, convert_oct_to_dec(15));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(8, convert_oct_to_dec(8));
}

           // operators
void test_add(void) {
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  TEST_ASSERT_EQUAL(-10, addition(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(8250, addition(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(7, subtraction(10, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtraction(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(10, multiplication(1, 10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiplication(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(5, division(25, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, division(2, 2));
}
