#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "Header.h"
#define MAXSIZE 10
int main(void) {
	char user_choice1[] = "Rock";
	char user_choice2[] = "Paper";
	char* result = RockPaperScissor(user_choice1, user_choice2);
	
	printf("%s",result);
	return 0;
}

char* RockPaperScissor(char user_choice1[], char user_choice2[]) {
	if (strcmp(user_choice1, user_choice2) == 0) { // draw
		return "draw";
	}
	//player 1 wins
	else if ((strcmp(user_choice1, "Rock") == 0 && strcmp(user_choice2, "Scissor") == 0) || (strcmp(user_choice1, "Paper") == 0 && strcmp(user_choice2, "Rock") == 0) || (strcmp(user_choice1, "Scissor") == 0 && strcmp(user_choice2, "Paper") == 0)) {
         return "player1";
	}
	//player 2 wins
	else if ((strcmp(user_choice2, "Rock") == 0 && strcmp(user_choice1, "Scissor") == 0) || (strcmp(user_choice2, "Paper") == 0 && strcmp(user_choice1, "Rock") == 0) || (strcmp(user_choice2, "Scissor") == 0 && strcmp(user_choice1, "Paper") == 0)) {
		return "player2";
	}
	else
	{
		return "invalid";
	}
}



