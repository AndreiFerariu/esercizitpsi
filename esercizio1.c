#include <stdio.h>

int main()
{

int numero1, numero2;
double risultato;

do
{
printf("inserisci primo numero");
scanf("%d", %numero1);
printf("inserisci secondo numero");
 scanf("%d", %numero2);


if (numero1 > numero2)
risultato = (double) numero2 / (double)numero1;

else 
risultato = (double)numero1 / (double) numero2;

printf("Risultato: %f\n", risultato);

} while (numero1 != 0 && numero2 != 0);

return 0;}