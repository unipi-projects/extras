#include <stdio.h>

void Something(int array[]);    // prototyped function

int main(void)
{
    // creating a simple array with 3 values
    int score[] = {130, 46, 149};

    // calling Something function and passing the score array to it
    Something(score[1]);
}

void Something(int array[])
{
    printf("array = %d\n", array);
}
