#include <stdio.h>
#include <cs50.h>

void counter(int x);

int main(void)
{
    counter(7);
}

void counter(int x)
{
    for(int i = 0; i < x; i++)
    {
        printf("%i\n", i);
    }
}
