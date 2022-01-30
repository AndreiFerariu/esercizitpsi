#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, b, rapporto, radice;
    printf("inserisci a:");
    scanf("%d", &a);
    printf("inserisci b:");
    scanf("%d", &b);
    if (a > b)
        rapporto = a / b;
    else
        rapporto = b / a

                   if (rapporto < 0)
                       printf("valore non identificato perchè i numeri sono negativi");
    else radice = sqrt(rapporto);

    return 0;
}