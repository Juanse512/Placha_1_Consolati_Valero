#include <stdio.h>
#include <stdlib.h>

int is_one(long int number, int bit){
    return (number >> bit) & 1;
}


int main(){
    long int number;
    int bit;
    printf("Ingrese el numero y el bit a conseguir (empezando en 0)\n");
    scanf("%ld %d", &number, &bit);
    printf("%d\n", is_one(number, bit));
    return 0;
}