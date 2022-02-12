#include <stdio.h>

// Program that counts blanks, tabs, and newlines
int main(){
    int c, nB, nT, nL; // dummy character, num blanks, num tabs, num lines

    nB = nT = nL = 0;
    while((c = getchar()) != EOF){
        if(c == '\b')
            ++nB;
        else if(c == '\t')
            ++nT;
        else if(c == '\n')
            ++nL;
    }
    printf("numbers of blanks: %1d\n", nB);
    printf("numbers of tabs: %1d\n", nT);
    printf("numbers of newlines: %1d\n", nL);
}