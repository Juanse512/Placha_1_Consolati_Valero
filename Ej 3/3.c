#include <stdio.h>
#include <stdlib.h>

void printbin(unsigned long int number){
    for(int i = 63; i >= 0; i--){
        printf("%lu", (number >> i) & 1);
    }
    printf("\n");
}


int main(){
    unsigned long int number;
    printf("Ingrese el numero\n");
    scanf("%ld", &number);
    printbin(number);
    return 0;
}
