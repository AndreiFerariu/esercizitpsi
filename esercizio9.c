#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, maggiore = 0, minore = 0;

    do
    {
        printf("inserisci a: \n");
        scanf("%d", &a);
        printf("inserisci b: \n");
        scanf("%d", &b);
        printf("inserisci c: \n");
        scanf("%d", &c);

        if (a < b && b < c )
        {
            if (a < minore)
                minore = a;
            else if (c > maggiore)
                maggiore = c;
        }

        else
        {
            printf("la terna non rispetta i requisiti richiesti\n");
        }
    } while (a >= 0 || b >= 0 || c >= 0);

    printf("valore maggiore: %d\n", maggiore);
    printf("valore minore: %d\n", minore);

    return 0;
}