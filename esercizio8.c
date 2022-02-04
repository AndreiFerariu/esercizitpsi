#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{

    int a;
    double somma = 0;

    do
    {

        printf("inserisci un numero:\n");
        scanf("%d", &a);

        if (a >= 0)
        {
            
            somma = somma + sqrt(a);
            printf("somma delle radici è di:%f\n", somma);
        }
        else
        {
            printf("valore errato:\n");
        }

    } while (a >= 0);

    return 0;
}