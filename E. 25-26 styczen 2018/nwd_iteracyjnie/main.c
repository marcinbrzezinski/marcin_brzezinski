#include <stdio.h>
#include <stdlib.h>

void info(void)
{
    printf("\n\n");
    printf("=================================\n");
    printf("==              NWD            ==\n");
    printf("=================================\n");
    printf("Autor: ml. asp. Marcin Brzezinski\n");
    printf("Wyzsza Szkola Policji w Szczytnie\n");
    printf("---------------------------------\n\n\n");
}

int nwd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

void pokaz_nwd(int a, int b)
{
    if(a||b)
        printf("%d\n",nwd(abs(a),abs(b)));
    else
        printf("Nie moge wyznaczyc NWD!\n");
}

int main()
{
    int a, b;

    info();

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("NWD(%d,%d) = ", a, b);
    pokaz_nwd(a,b);

    return 0;
}