#include <stdio.h>
#define DIM 4
int main(int argc, char *argv[])
{

    int numeri[DIM];
    int i;

    


            for (i = 0; i < DIM; i++)
    {
        if (i == 0)
        {
            printf("inserisci numeri:\n");
                scanf("%d", &numeri[i]);
        }
        else
            scanf("%d", &numeri[i]);
    }

    for (i = 0; i < DIM; i++)
    {
        if (i == 0)
        {
            printf("numeri inseriti sono:\n");
                printf("%d", numeri[i]);
        }
        else
            printf("%d", numeri[i]);
    }

    return 0;
}