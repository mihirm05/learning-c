#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	// parsing multiple arrays simultaneously
	int counter;
	int player[5] = { 45, 51, 53, 67, 87 };
	int goals[5] = { 24, 20, 19, 29, 30 };
	int games_played[5] = { 30, 25, 28, 24, 30 };
	float goals_per_game[5];
	float best_goals_per_game = 0.0;
	int best_player;

	printf("Player \t Goals \t Games \t Goals/Game\n");

	for (counter = 0; counter < 5; counter++)
	{
		goals_per_game[counter] = (float)goals[counter] / (float)games_played[counter];
		printf("%d \t %d \t %d \t %.2f \n", player[counter], goals[counter], games_played[counter], goals_per_game[counter]);

		if (goals_per_game[counter] > best_goals_per_game)
		{
			best_goals_per_game = goals_per_game[counter];
			best_player = player[counter];
		}
	}
	printf("\nThe best player is %d \n", best_player);
}