#include sort.h
#include unity.h
#include unity_fixture.h

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

char On[] = On;
char On2[] = On2;
char Onlogn[] = Onlogn;

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

//TEST_ASSERT_EQUAL(-1, foo(2,2));

TEST(Sort, Test_Sort_1) //COUNTING
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, COUNTING));
  //TEST_ASSERT_EQUAL(1, sort(vetor10, 1, On, COUNTING));
  //TEST_ASSERT_EQUAL(1, sort(vetor10, 1, On2, COUNTING));
  //TEST_ASSERT_EQUAL(1, sort(vetor10, 1, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, COUNTING));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, COUNTING));
}

TEST(Sort, Test_Sort_2) //RADIX
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, RADIX));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, RADIX));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, RADIX));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, RADIX));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, RADIX));
}

TEST(Sort, Test_Sort_3) //BUBBLE
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, BUBBLE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, BUBBLE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, BUBBLE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, BUBBLE, Onlogn));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, BUBBLE));
}

TEST(Sort, Test_Sort_4) //INSERTION
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, INSERTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, INSERTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, INSERTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, INSERTION));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, Onlogn, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, INSERTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, INSERTION));
}

TEST(Sort, Test_Sort_5) //SELECTION
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, , On, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, , On, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , On, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , On, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , Onlogn, SELECTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , On, SELECTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , On2, SELECTION));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, , On, SELECTION));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, , Onlogn, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , On, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , On2, SELECTION));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , Onlogn, SELECTION));
}

TEST(Sort, Test_Sort_6) //
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor0, 1, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor1, 24, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , On2, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , On2, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, , Onlogn, HEAP));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , On, HEAP));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , On2, HEAP));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, , On2, HEAP));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, , Onlogn, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , On, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , On2, HEAP));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , , Onlogn, HEAP));
}

TEST(Sort, Test_Sort_7) //MERGE
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor0, 1, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor1, 24, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, MERGE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, MERGE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, MERGE));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, MERGE));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, Onlogn, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, MERGE));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, MERGE));
}

TEST(Sort, Test_Sort_8) //QUICK
{
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor0, 1, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor0, 1, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor1, 24, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor1, 24, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor2, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor2, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor3, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor3, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor4, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor4, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor5, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor5, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor6, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor6, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor7, 20, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor7, 20, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, On2, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor8, 1, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, On2, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor9, 1, Onlogn, QUICK));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On, QUICK));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, On2, QUICK));
  //TEST_ASSERT_EQUAL(1, sort(*vetor10, 1, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor11, 2, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor11, 2, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor12, 2, On2, QUICK));
  TEST_ASSERT_EQUAL(0, sort(vetor12, 2, Onlogn, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , On2, QUICK));
  TEST_ASSERT_EQUAL(1, sort(vetor13, , Onlogn, QUICK));
}