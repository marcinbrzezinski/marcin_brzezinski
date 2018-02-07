#include <stdio.h>
#include <stdlib.h>
void info(void)
{
    printf("\n\n");
    printf("=================================\n");
    printf("==          KALKULATOR         ==\n");
    printf("=================================\n");
    printf("Autor: ml. asp. Marcin Brzezinski\n");
    printf("Wyzsza Szkola Policji w Szczytnie\n");
    printf("---------------------------------\n\n\n");
}
double dodawanie(double a, double b)
{return a+b;}

double odejmowanie(double a, double b)
{return a-b;}

double mnozenie(double a, double b)
{return a*b;}

double dzielenie(double a, double b)
{return a/b;}

double kalkulator(double a, double b, char wybor)
{
    switch (wybor){
        case '+':
            return dodawanie(a,b);
        case '-':
            return odejmowanie(a,b);
        case '*':
            return mnozenie(a,b);
        case '/':
            return dzielenie(a,b);
        case 'q':
            exit(0);
        default:
            printf("Nieprawilowy wybor dzialania!\n");
            return 0;
    }
}

int main()
{
    info();
    double a,b;
    char wybor;

    while(1){
        printf("Podaj pierwsza liczbe: \n");
        scanf(" %lf",&a);
        printf("Wybierz dzialanie:\n (+) Dodawanie, (-) Odejmowanie, (*) Mnozenie, (/) Dzielenie, (q) - WYJSCIE!\n");
        scanf(" %c",&wybor);
        printf("Podaj druga liczbe b: \n");
        scanf(" %lf",&b);
        printf("\n\tWynik = %f\n", kalkulator(a,b,wybor));
        printf("--------------------------------------------------------------------------\n");
    }

    return 0;
}


