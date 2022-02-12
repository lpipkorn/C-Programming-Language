#include <stdio.h>

/* print Fahrenheit-Celsius Table for fahr = 0, 20, ..., 300; floating-point version */

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    printf("Fahrenheit | Celsius\n");     // Displaying a heading for the table
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%6.0f %12.1f\n", fahr, celsius);     // character widths modified to land them roughly in the middle of the headings
        fahr = fahr + step;
    }
}