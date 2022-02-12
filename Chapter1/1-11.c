#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

// count lines, words, and characters in input
int main(){
    int c, nL, nW, nC, state; // dummy char, num lines, num words, num characters, inside/outside word

    state = OUT;
    nL = nW = nC = 0;
    while ((c = getchar()) != EOF){
        ++nC;
        if (c == '\n')
            ++nL;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nW;
        }
    }
    printf("%d %d %d\n", nL, nW, nC);
}
/* I would test this program by feeding in some text file that I've counted already. 
I expect input with lots of spaces, tabs, and new lines would be the most 
likely to uncover a bug. */