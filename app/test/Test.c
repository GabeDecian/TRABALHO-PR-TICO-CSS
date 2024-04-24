#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

int vetor0[20] = {0};
int vetor1[30] = {1,2,7,3,7,8,2,9,2,29,19,3,12,4,3,3,2,123,8,129,419,48,29,49}; //vetor maior que o permitido
int vetor2[20] = {20,19,9,3,6,8,2,3,9,3,1,69,4,123,59,49,39,335,1111,39};
int vetor3[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int vetor4[20] = {-1,-2,-3,-4,-5,-6,1,2,3,4,5,0,74,-123,123,3,4,7,8,9};
int vetor5[20] = {111,333,444,555,666,777,888,999,1000,1,5,2,4,3,0,0,0,0,0,0};
int vetor6[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int vetor7[20] = {-1,-1,-1,-1,-1,-2,-2,-2,-3,-3,-5,-6,-7,-8,-9,-12,-12,-15,-11,-12};
int vetor8[20] = {-1};
int vetor9[20] = {1};
int vetor10[20] = {"\n"};
int vetor11[20] = {5,0};
int vetor12[20] = {-2,-5};
int vetor13[20] = {};
//int vetor14[20] = {};

/*
+===========================================================+
|a =  ponteiro para o vetor de inteiros de 2 a 20 elementos |
|lenght = o tamanho do vetor passado						|
|type é a complexidade On, On2 ou Onlogn					|
|o ultimo é qual algoritmo é usado							|	
+===========================================================+
*/

//int sort(int* a, int length, char* type, int algorithm);

//TEST_ASSERT_EQUAL(-1, foo(2,2));

TEST(Sort, Test_Sort_1) //COUNTING
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, COUNTING, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , COUNTING, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , COUNTING, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , COUNTING, Onlogn));
}

TEST(Sort, Test_Sort_2) //RADIX
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, RADIX, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , RADIX, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , RADIX, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , RADIX, Onlogn));
}

TEST(Sort, Test_Sort_3) //BUBBLE
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, BUBBLE, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , BUBBLE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , BUBBLE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , BUBBLE, Onlogn));
}

TEST(Sort, Test_Sort_4) //INSERTION
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, INSERTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, INSERTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , INSERTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , INSERTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , INSERTION, Onlogn));
}

TEST(Sort, Test_Sort_5) //SELECTION
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, SELECTION, On));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, SELECTION, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , SELECTION, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , SELECTION, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , SELECTION, Onlogn));
}

TEST(Sort, Test_Sort_6) //HEAP
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor0, 1, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor1, 24, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, HEAP, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, HEAP, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, HEAP, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, HEAP, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, HEAP, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , HEAP, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , HEAP, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , HEAP, Onlogn));
}

TEST(Sort, Test_Sort_7) //MERGE
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor0, 1, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor1, 24, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, MERGE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, MERGE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, MERGE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, MERGE, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, MERGE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , MERGE, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , MERGE, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , MERGE, Onlogn));
}

TEST(Sort, Test_Sort_8) //QUICK
{
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor0, 1, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor0, 1, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor1, 24, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor1, 24, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor2, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor2, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor3, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor3, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor4, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor4, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor5, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor5, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor6, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor6, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor7, 20, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor7, 20, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, QUICK, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor8, 1, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, QUICK, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor9, 1, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, QUICK, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor11, 2, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor11, 2, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor12, 2, QUICK, On2));
  TEST_ASSERT_EQUAL(0, sort(*vetor12, 2, QUICK, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , QUICK, On));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , QUICK, On2));
  TEST_ASSERT_EQUAL(1, sort(*vetor13, , QUICK, Onlogn));
}