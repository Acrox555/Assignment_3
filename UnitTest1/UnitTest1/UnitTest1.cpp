#include "pch.h"
#include "CppUnitTest.h"
extern "C" char* RockPaperScissor(char user_choice1[], char user_choice2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(InvalidInput1)
		{
			char player1[] = { "rock" };
			char player2[] = { "Paper" };
			char Expected_result[] = { "invalid" }; // if the player one enters a wrong input
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(InvalidInput2)
		{
			char player1[] = { "Rock" };
			char player2[] = { "paper" };
			char Expected_result[] = { "invalid" }; // if player  two enter a wrong input
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		// three condition where player 1 wins
		TEST_METHOD(player1Winsrock)
		{
			char player1[] = { "Rock" };
			char player2[] = { "Scissor" };
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player1WinsPaper)
		{
			char player1[] = { "Paper"};
			char player2[] = { "Rock" };
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player1WinsScissor)
		{
			char player1[] = { "Scissor" };
			char player2[] = { "Paper" };
			char Expected_result[] = { "player1" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		// three condition where player 2 win
		TEST_METHOD(player2WinsRock)
		{
			char player2[] = { "Rock" };
			char player1[] = { "Scissor" };
			char Expected_result[] = { "player2" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player2WinsPaper){

			char player2[] = { "Scissor" };
		    char player1[] = { "Paper" };
		    char Expected_result[] = { "player2" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(player2WinsScissor)
		{
			char player2[] = { "Scissor" };
			char player1[] = { "Paper" };
			char Expected_result[] = { "player2" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		//three condition where it becomes  draw
		TEST_METHOD(DrawRock)
		{
			char player1[] = { "Rock" };
			char player2[] = { "Rock" };
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(DrawPaper)
         {
			char player1[] = { "Paper" };
			char player2[] = { "Paper" };
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
		TEST_METHOD(DrawScissor)
		{
			char player1[] = { "Scissor" };
			char player2[] = { "Scissor" };
			char Expected_result[] = { "draw" };
			char* return_value = RockPaperScissor(player1, player2);
			Assert::AreEqual(strcmp(return_value, Expected_result), 0);


		}
	};
}
