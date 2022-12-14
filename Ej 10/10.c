#include <stdio.h>
#include <math.h>


int myisnan(float f){
    unsigned int num = *(unsigned*)&f;
    unsigned int m = (num & 0x007fffff) | (127 << 23);
    float mantissa = *(float*)&m;
    unsigned int e = (num & 0x7f800000) >> 23;
    if(e == 255 && mantissa != 0){
        return 1;
    }else{
        return 0;
    }

}

int myisnan2(float f){
    unsigned int num = *(unsigned*)&f;
    if(myisnan(f)){
        printf("Es NAN\n");
    }else{
        printf("No es NAN\n");
    }
}

int myisinf(float f){
    unsigned int num = *(unsigned*)&f;
    unsigned int positive = (num & 0x80000000) >> 31;
    unsigned int m = (num & 0x007fffff) >> 23;
    float mantissa = *(float*)&m;
    unsigned int e = (num & 0x7f800000) >> 23;
    if(positive == 0 && e == 255 && mantissa == 0){
        printf("Es Infinito Positivo\n");
    }else{
        printf("No Es Infinito Positivo\n");
    }

}


int main(void)
{
    float g = 0.0;
    float f = 0.0 / g;
    float t2 = 2.5;
    float inf = INFINITY;
    float inf2 = inf + 1;
    myisinf(inf);
    // g) Si le sumamos uno al infinito sigue siendo infinito
    myisinf(inf2);
    return 0;
}
