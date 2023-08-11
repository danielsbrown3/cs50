#include <stdio.h>
#include <string.h>

int main(void)
{

    char player1[100];
    printf("Player One: ");
    scanf("%s",player1);

    char player2[100];
    printf("Player Two: ");
    scanf("%s",player2);

    int points[]= {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};


    //int compareA[26];
    //for (int h=0;h<26;h++)
    //{
    //    compareA[h]= 97 + h;
    //    printf("%i ",compareA[h]);
    //}

    int score = 0;
    for(int i=0;i < strlen(player1);i++)
    {
            score += points[player1[i] - 97];
    }

    int score2 = 0;
    for(int i=0;i < strlen(player2);i++)
    {
            score2 += points[player2[i] - 97];
    }

    if (score2 > score)
    {
        printf("The Final score is: \n %i for Player One \n %i for Player Two \n Player Two Wins!",score,score2);
    }
    else
    {
        printf("The Final score is: \n %i for Player One \n %i for Player Two \n Player One Wins!",score,score2);
    }

}
