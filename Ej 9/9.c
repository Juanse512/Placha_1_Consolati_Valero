#include <stdio.h>
#include <stdlib.h>

void get_float(float a){
    unsigned int num = *(unsigned*)&a;
    unsigned int m = (num & 0x007fffff) | (127 << 23);
    float mantissa = *(float*)&m;
    unsigned int e = (num & 0x7f800000) >> 23;
    printf("Exponente: %d, Mantisa: %f \n", e, mantissa);
}


int main(){
    float a;
    printf("Ingrese un numero\n");
    scanf("%f", &a);
    get_float(a);
    return 0;
}