#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
  RUN_TEST_CASE(Sort, TestQuickSort);
  //RUN_TEST_CASE(Sort, TestFoo2);
}
