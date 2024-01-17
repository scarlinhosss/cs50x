#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char decision = get_char("Do you agree?\n");
    if(decision == 'Y' || decision == 'y')
    {
    printf("you agreed.\n");
    }
    else if(decision == 'n' || decision == 'N')
    {
        printf("Not agreed\n");
    }
    else
    {
        printf("You have to type 'y' for 'yes' and 'n' for 'no'\n");
    }
}
