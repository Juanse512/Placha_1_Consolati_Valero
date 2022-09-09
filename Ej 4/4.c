#include <stdio.h>
#include <stdlib.h>
// b = a   c = b   a = c
void switch_variables(int *a, int *b, int *c){
    *b = *a^*b;
    *a = *a^*b; // a ^ (a ^ b) = b
    *b = *b^*a; // b ^ (a ^ b) = a

    *c = *a^*c;
    *a = *a^*c; // a ^ (a ^ c) = c
    *c = *c^*a; // c ^ (a ^ c) = a
    
}


int main(){
    int a, b, c;
    printf("Ingrese 3 numeros\n");
    scanf("%d %d %d", &a, &b, &c);
    switch_variables(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}