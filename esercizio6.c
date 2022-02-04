#include <stdio.h>
int main(int argc, char *argv[])
{
int a,b,c,media, sentinella = 0, somma;


do
 {
 printf("inserisci a:\n" );
 scanf("%d", &a);
 printf("inserisci b (un valore maggiore di a):\n" );
 scanf("%d", &b); 
 } while (a > b || a == b);
do
{
 printf("inserisci c:\n" );
 scanf("%d", &c);
 if (c > a && c <b)
 { 
sentinella++;
somma = somma + c;
 }
 
 
} while (c < b && c > a);
media = (double) somma / (double) sentinella; 
printf("La media è:\n", media );

}
