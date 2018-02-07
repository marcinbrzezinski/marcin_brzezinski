#include <stdio.h>
#include <math.h>

void info(void)
{
    printf("\n\n");
    printf("====================================\n");
    printf("== KALKULATOR ROWNAN KWADRATOWYCH ==\n");
    printf("====================================\n");
    printf("  Autor: ml. asp. Marcin Brzezinski\n");
    printf("  Wyzsza Szkola Policji w Szczytnie\n");
    printf("------------------------------------\n\n\n");
}

int main()


{
    info();
	puts("Jestem kalkulatorem rownan kwadratowych ax^2 + bx + c = 0");
	float a,b,c,delta;
	printf("Podaj wartosc argumentu a: "); scanf("%e", &a);
	printf("Podaj wartosc argumentu b: "); scanf("%e", &b);
	printf("Podaj wartosc argumentu c: "); scanf("%e", &c);
	delta=(b*b)-(4*a*c);
	if(a==0){puts("'a' musi byc ROZNE od zera!");}
	else{
        if(delta>0){printf("Rownanie ma dwa rozwiazania: x1 = %.2f x2 = %.2f\n", (-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));}
	    else if(delta==0){printf("Rownanie ma jedno rozwiazanie: x = %.2f\n", -b/(2*a));}
	    else if(delta<0){printf("Rownanie nie ma rozwiazan rzeczywistych!\n");}
	}
return 0;

}