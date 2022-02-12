#include <stdio.h>

/* print Celsius-Fahrenheit Table for celsius = 0, 20, ..., 300; floating-point version */

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    celsius = lower;
    printf("Celsius | Fahrenheit\n");     // Displaying a heading for the table
    while(celsius <= upper){
        fahr = 32.0 + (9.0/5.0) * celsius;
        printf("%5.0f %11.1f\n", celsius, fahr);     // character widths modified to land them roughly in the middle of the headings
        celsius = celsius + step;
    }
}