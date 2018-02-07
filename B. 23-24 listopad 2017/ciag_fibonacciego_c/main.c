#include <stdio.h>
void info(void)
{
    printf("\n\n");
    printf("=================================\n");
    printf("==   PROGRAM LICZACY LITERY    ==\n");
    printf("=================================\n");
    printf("Autor: ml. asp. Marcin Brzezinski\n");
    printf("Wyzsza Szkola Policji w Szczytnie\n");
    printf("---------------------------------\n\n\n");
}
int main(){
    int f1=1;
    int f2=1;
    int n,temp;
    info();
    printf("\nPodaj ktory element ciagu Fibonacciego obliczyc?\n");
    scanf("%d",&n);
    if(n<=2) printf("%d elementem ciagu Fibonacciego jest 1\n",n);
    else{
        for(int i=3;i<=n;i++){
            temp=f1+f2;
            f1=f2;
            f2=temp;
        }
        printf("%d elementem ciagu Fibonacciego jest %d\n",n,f2);
    }
    return 0;
}
