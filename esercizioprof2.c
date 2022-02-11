#include <stdio.h>

int main(int argc, char *argv[])
{

    int n, sentinella = 0;

    printf("inserisci un numero:\n");
    scanf("%d", &n);

    do
    {
        if (sentinella % 2 != 0)
        {
            if (sentinella == 1)
            {
                printf("numeri:\n");
                printf("- %d \n", sentinella);
            }
            else
                printf("- %d \n", sentinella);
        }

        sentinella++;
    } while (sentinella != n);

    return 0;
}