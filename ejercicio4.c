#include <stdio.h>

int main (int argc, char *argv[]) {
    int numeros [7] = {3, 6, 9, 12, 15, 18, 21};
    int *ptr;
    ptr = &numeros[0];

    for (int i = 0; i < 7; i++) {
    printf("%d ", numeros [i]);
    printf("%d\n",*(ptr++));
    }

    return 0; 
}