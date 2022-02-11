#include <stdio.h>

int main(int argc, char *argv[])
{

    int n, sentinella;

    printf("inserisci un numero:\n");
    scanf("%d", &n);
    sentinella = n;

    do
    {
        if (sentinella == n)
        {
            printf("numeri:\n");
            printf("- %d \n", sentinella);
        }
        else
            printf("- %d \n", sentinella);

        sentinella--;
    } while (sentinella != 0);

    return 0;
}