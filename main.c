#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran1to3()
{
    int num;

    num = rand() % 3 + 1;
    return num;
}
int com_c()
{
    int computer, pr = 0;
    computer = ran1to3();
    while (1)
    {
        if (pr != computer)
        {
            return computer;
            pr = computer;
            break;
        }
    }
}
// stone(1) vs (2)Paper -> 2 Paper wins.
// stone(1) vs (3)Scissor -> 1 stone wins.
// Paper(2) vs (3)Scissor -> 3 Scissor wins.
int posiblity(int you,int  computer)
{
    if (you == computer)
    {
        return -1;
    }
    else if (you == 1 && computer == 2)
    {
        return 0;
    }
    else if (you == 2 && computer == 3)
    {
        return 0;
    }
    else if (you == 3 && computer == 1)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    srand(time(NULL));
    int result,your_score=0,com_score=0;
    int you, computer, i = 0;
    printf("\n\n\n\n\t\t\t\tEnter 1 for STONE, 2 for PAPER and 3 for SCISSOR\n\t\t\t\t");
    printf("-------------------------------------------------\n\t\t\t\t\t\t\t");
    int pr = 0;

    while (i < 3)
    {
        printf("\n\n\n\t\t\t\tEnter your choose  >>>> ");
        scanf("%d", &you);
        computer=com_c();
        printf("\n\t\t\t\tcomputer choose >>>> %d\n",computer);
        result=posiblity(you,computer);

        if (result==0)
        {
            ++com_score;
            printf("\t\t\t\tCOMPUTER SCORE : %d\n",com_score);
            printf("\t\t\t\tYOUR SCORE : %d\n",your_score);
        }
        else if (result==1)
        {
                
            ++your_score;
            printf("\t\t\t\tYOUR SCORE : %d\n",your_score);
            printf("\t\t\t\tCOMPUTER SCORE : %d\n",com_score);
        }
        else{
            printf("\t\t\t\tBOTH CHOOSE SAME.....\n");
        }
        i++;
    }


printf("\t\t\t\t----------------");
if (your_score>com_score)
{
    printf("\t\t\t\tYOU WIN THE MATCH....");

}
else{
    printf("\t\t\t\tCOMPUTER WIN THE MATCH.....");
}
    return 0;
}