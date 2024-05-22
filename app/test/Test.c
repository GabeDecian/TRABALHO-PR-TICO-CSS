#include <sort.h>
#include <unity.h>
#include <unity_fixture.h>

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

char On[] = "On";
char On2[] = "On2";
char Onlogn[] = "Onlogn";

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
//int vetor10[20] = {\n};
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

////TEST_ASSERT_EQUAL(-1, foo(2,2));

TEST(Sort, Test_Sort_1) //0
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 0));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 0));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, 0));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 0));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 0));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor10, 1, On, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor10, 1, On2, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor10, 1, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, 0));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, 0));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 0));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 0));
}

TEST(Sort, Test_Sort_2) //1
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 1));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 1));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 1));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, 1));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, 1));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 1));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 1));
}

TEST(Sort, Test_Sort_3) //2
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 2));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 2));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 2));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 2));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On2, 2));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 2));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 2));
}

TEST(Sort, Test_Sort_4) //3
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 3));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 3));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 3));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 3));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On2, 3));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 3));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 3));
}

TEST(Sort, Test_Sort_5) //4
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 4));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 4));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 4));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 4));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On2, 4));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , On, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, 4));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, 4));
}

TEST(Sort, Test_Sort_6) //5
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor0, 1, Onlogn, 5));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 5));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 5));
  ////TEST_ASSERT_EQUAL(0, sort(vetor1, 24, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 5));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 5));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 5));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, Onlogn, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 5));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, 5));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, Onlogn, 5));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , On, 5));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, 5));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, 5));
}

TEST(Sort, Test_Sort_7) //6
{
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor0, 1, Onlogn, 6));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 6));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 6));
  ////TEST_ASSERT_EQUAL(0, sort(vetor1, 24, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor2, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor3, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor4, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor5, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor6, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor7, 20, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 6));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 6));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 6));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor11, 2, Onlogn, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 6));
  //TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, 6));
  //TEST_ASSERT_EQUAL(0, sort(vetor12, 2, Onlogn, 6));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 6));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 6));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 6));
}

TEST(Sort, Test_Sort_8) //7
{
  ////TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor0, 1, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor1, 24, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor2, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor3, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor4, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor5, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor6, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor7, 20, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, 7));
  ////TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor11, 2, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, 7));
  ////TEST_ASSERT_EQUAL(0, sort(vetor12, 2, Onlogn, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, On2, 7));
  ////TEST_ASSERT_EQUAL(1, sort(vetor13, Onlogn, 7));
}