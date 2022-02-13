#include <stdio.h>

int main(int argc, char *argv[])
{

    int n,menoN, sentinella;
    do
    {
        printf("inserisci un numero:\n");
        scanf("%d", &n);
        menoN = -n;
        sentinella = menoN;
        
    } while (n < 0);
    
    do
    {
        if (sentinella == menoN)
        {
            printf("numeri:\n");
            printf("- %d \n", sentinella);
        }
        else
            printf("- %d \n", sentinella);

        sentinella++;

    } while (sentinella <= n);

    return 0;
}