#include <logic.h>
#include <unity.h>

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 2));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(-1.0, divide(2, 0));
    TEST_ASSERT_EQUAL(5.0, divide(10, 2));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
