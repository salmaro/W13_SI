#include "pch.h"
#include <tuple>
#include "../FizzBuzzJazz/fizzBuzz.h"

class FizzBuzzTest
	: public testing::TestWithParam<std::tuple<int, std::string>> {
};

TEST_P(FizzBuzzTest, FizzBuzzClassTest1) {

	std::tuple<int, std::string> myCase = GetParam();

	int number = std::get<0>(myCase);
	std::string output = std::get<1>(myCase);

	std::cout << "param = " << number << "expe value " << output << std::endl;
	std::string s = fizzBuzz(number);
	ASSERT_EQ(s, output);
}

INSTANTIATE_TEST_CASE_P(FizzBuzzClassTest, FizzBuzzTest, testing::Values(
	std::make_tuple(840, "FizzBuzzJazz"),
	std::make_tuple(105, "FizzBuzzJazz"),
	std::make_tuple(140, "BuzzJazz"),
	std::make_tuple(35, "BuzzJazz"),
	std::make_tuple(42, "FizzJazz"),
	std::make_tuple(21, "FizzJazz"),
	std::make_tuple(60, "FizzBuzz"),
	std::make_tuple(15, "FizzBuzz"),
	std::make_tuple(216231, "Fizz"),
	std::make_tuple(14, "Jazz"),
	std::make_tuple(7, "Jazz"),
	std::make_tuple(21625, "Buzz"),
	std::make_tuple(21624, "Fizz"),
	std::make_tuple(10, "Buzz"),
	std::make_tuple(6, "Fizz"),
	std::make_tuple(5, "Buzz"),
	std::make_tuple(3, "Fizz"),
	std::make_tuple(2, "2"),
	std::make_tuple(21629, "21629"),
	std::make_tuple(1, "1")));

void checkFizzBuzz(int value, std::string expectedResult) {
	std::string result = fizzBuzz(value);
	EXPECT_EQ(expectedResult, result);
}

TEST(FizzBuzzJazzTest, input1Result1) {
	checkFizzBuzz(1, "1");
 }

TEST(FizzBuzzJazzTest, input2Result2) {
	checkFizzBuzz(2, "2");
}

TEST(FizzBuzzJazzTest, input3ResultFizz) {
	checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzJazzTest, input5ResultBuzz) {
	checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzJazzTest, divisible3ResultFizz) {
	checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzJazzTest, divisible5ResultFizz) {
	checkFizzBuzz(10, "Buzz");
}

TEST(FizzBuzzJazzTest, divisible21629Result21629) {
	checkFizzBuzz(21629, "21629");
}

TEST(FizzBuzzJazzTest, divisible21624ResultBuzz) {
	checkFizzBuzz(21624, "Fizz");
}

TEST(FizzBuzzJazzTest, divisible21625ResultBuzz) {
	checkFizzBuzz(21625, "Buzz");
}

TEST(FizzBuzzJazzTest, input3ResultJazz) {
	checkFizzBuzz(7, "Jazz");
}

TEST(FizzBuzzJazzTest, input14ResultJazz) {
	checkFizzBuzz(14, "Jazz");
}

TEST(FizzBuzzJazzTest, divisible216231ResultJazz) {
	checkFizzBuzz(216231, "Fizz");
}


TEST(FizzBuzzJazzTest, divisible15ResultFizzBuzz) {
	checkFizzBuzz(15, "FizzBuzz");
}

TEST(FizzBuzzJazzTest, divisible60ResultFizzBuzz) {
	checkFizzBuzz(60, "FizzBuzz");
}

TEST(FizzBuzzJazzTest, divisible21ResultFizzJazz) {
	checkFizzBuzz(21, "FizzJazz");
}

TEST(FizzBuzzJazzTest, divisible42ResultFizzJazz) {
	checkFizzBuzz(42, "FizzJazz");
}

TEST(FizzBuzzJazzTest, divisible35ResultBuzzJazz) {
	checkFizzBuzz(35, "BuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible140ResultBuzzJazz) {
	checkFizzBuzz(140, "BuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible140ResultFizzBuzzJazz) {
	checkFizzBuzz(105, "FizzBuzzJazz");
}

TEST(FizzBuzzJazzTest, divisible840ResultFizzBuzzJazz) {
	checkFizzBuzz(840, "FizzBuzzJazz");
}
