#include <gtest/gtest.h>
#include "Vec.h"

TEST(studentas, ValueAssignCheck) {
  studentas a;
  string value = "Jonas";
  a.setVardas(value);
  EXPECT_TRUE(a.getVardas() == value);
}

TEST(studentas, TestPazymiuSk) {
  studentas a;
  int value = 3;
  a.setPazymys(4);
  a.setPazymys(10);
  a.setPazymys(8);
  EXPECT_TRUE(a.getPazymiai().size() == value);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
