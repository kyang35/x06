/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
/*
TEST(TicTacToeBoardTest, toggleTurn())
{
	ASSERT_FALSE(
	if(turn == X)
	{
		turn = X;
	}
	, FALSE
	)
	ASSERT_FALSE(
	if(turn == O)	
	{
		turn = O;
	}
	ASSERT_TRUE();
}
*/
