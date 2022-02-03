#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, b, rapporto, radice;
    do
    {printf("inserisci a:");
    scanf("%d", &a);
    printf("inserisci b:");
    scanf("%d", &b);
    if (a > b)
        rapporto = (double)a / (double)b;
    else
        rapporto = (double)b / (double)a;

   if (rapporto > 0)
  radice = sqrt(rapporto);
    prinf("La radice quadrata della divisione è: \n", rapporto);
    } while(rapporto > 0);
printf("valore non identificato perchè i numeri sono negativi");
    return 0;
}
