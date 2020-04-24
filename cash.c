#import <cs50.h>
#import <stdio.h>

float getPositiveFloat(string);

int main(void)
{
    // get cents amount
    float change = getPositiveFloat("change owed: $");
    // create coin counter, starting at 0
    int coins = 0;
    // convert to int for accuracy
    int cents = round(change * 100);
    // loop for change amount
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else if (cents >= 1)
        {
            cents -= 1;
            coins++;
        }
        else
        {
            printf("Error\n");
        }
    }
    printf("%i\n", coins);
}

float getPositiveFloat(string prompt)
{
    float x;
    do
    {
        x = get_float("%s", prompt);
    }
    while (x <= 0);

    return x;
}
