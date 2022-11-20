#include <csbootcamp.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Hello what's is your name?\n");
    string name = get_string("My name is ");
    printf("\n");
    printf("Hello, %s!I'm the wordle game, tell me what 5 character word you know.\n", name);
    string strings[] = {"ABOUT", "ABOVE", "ABUSE", "ACTOR", "ACUTE", "ADMIT", "ADOPT", "ADULT", "AFTER", "AGAIN", "AGENT", "AGREE", "AHEAD", "ALARM", "ALBUM", "ALERT", "ALIKE", "ALIVE", "ALLOW", "ALONE"...}
    printf("\n");
    string guess = get_string("Word: ");

    for (int i = 0; i < 500; i++)
    {
        if (strcmp(strings[i], guess) == 0)
        {
            printf("\n");
            printf("Congratulations, you guessed the word!\n");
            return 0;
        }
    }
    printf("\n");
    printf("I'm sorry, try again. You didn't guess...\n");
}