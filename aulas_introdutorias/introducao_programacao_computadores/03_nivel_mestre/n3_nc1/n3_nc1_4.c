#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;
    // double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);
    // printf("Número muito preciso (long double): %21lf\n", numeroMuitoPreciso);

    return 0;
}