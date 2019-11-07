//
// Created by Alex on 03.11.2019.
//

#include <stdio.h>

int choicevalue(int *state, int nochoices)
{
    int choiceindex=-1;
    char choice=getchar();
    getchar();
    if(choice==('a'+nochoices))
    {
        (*state)--;
        return -1;
    }
    else {
        (*state)++;
        choiceindex=choice-'a';
    }
    return choiceindex;
}
void signchoice(int *state, int *sign, char *name)
{
    int choice;
    choice=choicevalue(state,1);
    if(choice==0)
    {
        *sign=1;
        printf("Order confirmed! Thank you for buying from us, %s",name);
    }
    else
        (*state)--;
}