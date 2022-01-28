

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b ;
    int somma = 0;
    int prodotto;

    do
    {
        printf("valore di a:");
        scanf("%d", &a);
        printf("valore di b:");
        scanf("%d", &b);

        prodotto = a * b;
        printf("risultato prodotto:", prodotto);
        somma = somma + prodotto;

    } while (a != 0 && b != 0);
    printf("risultato somma:", somma);

    return 0;
}