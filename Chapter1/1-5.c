#include <stdio.h>

// print Fahrenheit-Celsius table
int main(){
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)       // reversed order from fahr = 300 to fahr = 0
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}