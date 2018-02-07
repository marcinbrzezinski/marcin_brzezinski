#include <stdio.h>
void info(void)
{
    printf("\n\n");
    printf("=================================\n");
    printf("== NAJWIEKSZY WSPOLNY DZIELNIK ==\n");
    printf("=================================\n");
    printf("Autor: ml. asp. Marcin Brzezinski\n");
    printf("Wyzsza Szkola Policji w Szczytnie\n");
    printf("---------------------------------\n\n\n");
}
int nwd(int a,int b)
{
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main()
{
    info();
    int a,b;

    printf("Podaj pierwsza liczbe = "); scanf("%d", &a);
    printf("Podaj druga liczbe = "); scanf("%d", &b);
    printf("NWD = %d\n",nwd(a,b));
    return 0;
}

