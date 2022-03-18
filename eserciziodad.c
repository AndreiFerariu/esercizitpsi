#include <stdio.h>
#define DIM 20

int main(int argc, char  *argv[])
{
int numero, array[DIM], sentinella = 0, somma = 0, sentinella2= 0;
double media;
do{
printf("inserisci un numero\n");
scanf("%d", &numero);
somma = somma + numero;
sentinella2++;
array[sentinella] = numero;
sentinella++;

} while (numero != 0 && sentinella < DIM );

media = somma/sentinella2 ;
printf("la media è%f\n", media);

for(int i = sentinella - 1; i > 0; i--)
{
if(array[i] > media)
printf("numeri inversi:%d\n", array[i]);



}
return 0;

}