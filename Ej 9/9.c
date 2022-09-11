#include <stdio.h>
#include <stdlib.h>
#include <ieee754.h>

void get_float(float a){
    unsigned int num = *(unsigned*)&a;
    unsigned int m = (num & 0x007fffff) | (127 << 23);
    float mantissa = *(float*)&m;
    unsigned int e = (num & 0x7f800000) >> 23;
    printf("Funcion Exponente: %d, Mantisa float: %f \n", e, mantissa);
}


int main(){
    float a;
    union ieee754_float f;
    printf("Ingrese un numero\n");
    scanf("%f", &a);
    f.f = a;
    printf("ieee754 exponente: %u mantisa entera: %d\n", f.ieee.exponent, f.ieee.mantissa);
    get_float(a);
    return 0;
}
