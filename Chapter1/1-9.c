#include <stdio.h>

// Program to copy input to output, replacing one or more blanks by a single blank
int main(){
    int c;
    int pC = 0;         // previous c, will keep track of if blank or not

    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (pC != ' ')
                putchar(c);
            else
                ;
        }
        else   
            putchar(c);
        pC = c;
    }
}