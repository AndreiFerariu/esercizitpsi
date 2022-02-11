#include <stdio.h>

int main(int argc, char *argv[])
{

    int n1, n2, sentinella;
    do
    {
        printf("inserisci un numero1:\n");
        scanf("%d", &n1);
        printf("inserisci un numero2:\n");
        scanf("%d", &n2);
        sentinella = n1 + 1;
    } while (n1 > n2);
    
    do
    {
        if (sentinella == n1 + 1)
        {
            printf("numeri:\n");
            printf("- %d \n", sentinella);
        }
        else
            printf("- %d \n", sentinella);

        sentinella++;
    } while (sentinella != n2);

    return 0;
}