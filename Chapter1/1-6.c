#include <stdio.h>

// copy input to output; 2nd version
int main(){
    int c;
    int b;

    while ((c = getchar()) != EOF){
        putchar(c);
        b = (c != EOF);
        printf("getchar() != EOF currently is: %1d\n", b );     // This is sloppy, but we can see b is always 1
    }                                                           // Actually, I have no idea how to make it 0 here
                                                                // Ctrl-C
}