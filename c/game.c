#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int result(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c1 == 's') && (c2 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c1 == 'p') && (c2 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c1 == 'r') && (c2 == 'p'))
    {
        return 0;
    }
}

int main()
{
    // char name[30], dict[] = {'r', 'p', 's'};
    // char yourchar, compchar;
    // int yourscore = 0, compscore = 0, temp;
    // printf("Welcome to the game Rock, Paper and scissors.\n");
    // printf("Enter your first name:");
    // scanf("%s", name);
    // printf("Let's start the game.\n %s Vs Computer\n", name);
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Round:%d\n", i + 1);
    //     printf("%s's turn:\n", name);
    //     printf("Select a number-\n 1.Rock\n 2.Paper\n 3.Scissors\n");
    //     scanf("%d", &temp);
    //     getchar();
    //     yourchar = dict[temp - 1];
    //     printf("you have choosen %c\n", yourchar);
    //     printf("Computer's turn:\n");
    //     temp = computer(3) + 1;
    //     compchar = dict[temp - 1];
    //     printf("Computer has choosen %c\n", compchar);

    //     if (result(yourchar, compchar) == 1)
    //     {
    //         yourscore += 1;
    //         printf("Well Done\n");
    //     }
    //     else if (result(yourchar, compchar) == -1)
    //     {
    //         yourscore += 1;
    //         compscore += 1;
    //         printf("t's a draw!\n");
    //     }
    //     else
    //     {
    //         compscore += 1;
    //         printf("Computer got it!\n");
    //     }
    //     printf("Score-\nYou:%d\nComputer:%d\n\n", yourscore, compscore);
    // }

    // if (yourscore > compscore)
    // {
    //     printf("%s win!", name);
    // }
    // else if (yourscore < compscore)
    // {
    //     printf("Computer win!");
    // }
    // else
    // {
    //     printf("It's draw!");
    // }
    int n;
    char a, b;

    printf("Enter  your  id:");
    scanf("%d", &n);
    getchar();
    printf("enter the value of a:\n");
    scanf("%c", &a);
    //  printf("") 
    printf("The value of a is %c.\n", a);
    // getchar();
    printf("enter the value of b:\n");
    scanf("%c", &b);

    return 0;
}