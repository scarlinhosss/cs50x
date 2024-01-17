#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's the x value?\n");
    int y = get_int("What's the y value?\n");
    if(x < y)
    {
        printf("x is less than y\n");
    }
    else if(x > y)
    {
        printf("x is bigger than y\n");
    }
    else
    {
        printf("x and y have the same value\n");
    }
}
