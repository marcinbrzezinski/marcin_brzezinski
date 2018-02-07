#include <stdio.h>

void info(void)
{
    printf("\n\n");
    printf("=====================================\n");
    printf("== CIAG FIBBONACIEGO REKURENCYJNIE ==\n");
    printf("=====================================\n");
    printf("  Autor: ml. asp. Marcin Brzezinski\n");
    printf("  Wyzsza Szkola Policji w Szczytnie\n");
    printf("-------------------------------------\n\n\n");
}

int fib(int element)
{
    if(element>1)
        return fib(element - 1)+ fib(element - 2);
    else
        return element;
}

int main(){
    int element;
    info();
    printf("Podaj numer elementu: ");
    scanf("%d", &element);

    if(element>=0) printf("Liczba Fibbonaciego dla (%d) elementu ciagu to %d\n", element, fib(element));

    return 0;
}