#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int printinganimation()
{
    int b;
    srand(time(NULL));
    b = rand() % 10;
    for (int dot = 0; dot <= b; dot++)
    {
        printf(".");
        Sleep(500);
        fflush(stdout);
    }
}
int main()
{
    char responses[20][50] = {"Yes, definitely.",
                              "Without a doubt.",
                              "Signs point to yes.",
                              "Most likely.",
                              "It is certain.",
                              "Outlook good.",
                              "You may rely on it.",
                              "As I see it, yes.",
                              "Reply hazy, try again.",
                              "Ask again later.",
                              "Better not tell you now.",
                              "My sources say no.",
                              "Absolutely... not.",
                              "Are you serious?",
                              "I wouldn't bet on it.",
                              "Only if you bribe me.",
                              "The spirits are busy.",
                              "You already know the answer.",
                              "LOL, no.",
                              "That's classified."};

    char x[100];
    printf("enter your question\n");
    fgets(x,sizeof(x),stdin);
    printf("thinking");
    printinganimation();
    srand(time(NULL));
    int index = rand() % 20;
    printf("\nmagic ball says \n %s", responses[index]);

    return 0;
}