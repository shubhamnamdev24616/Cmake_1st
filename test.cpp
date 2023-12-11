#include <gtest/gtest.h>
#include "calc1.h"

TEST(PalindromeTest, Test1) {
  EXPECT_EQ(isPalindrome(1234321), "Yes");
}

TEST(PalindromeTest, Test2) {
  EXPECT_EQ(isPalindrome(24616), "No");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
