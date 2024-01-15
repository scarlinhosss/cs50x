#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char answer = get_char("Type (y) for yes and (n) for no: ");
    printf("Your choice was: %c", answer);
}
