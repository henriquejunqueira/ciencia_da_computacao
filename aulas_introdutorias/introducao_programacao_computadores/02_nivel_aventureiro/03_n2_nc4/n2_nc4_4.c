#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
    // float quociente = a / b; // não exibe o valor completo por falta da conversão

    printf("Quociente: %.2f\n", quociente);

    return 0;
}