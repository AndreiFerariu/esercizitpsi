#include <stdio.h>

int main(int argc,char*argv[])
{
 
int ristorazione = 0, bevande = 0; 
double mediabev, mediarist, importo, importorist = 0, importobev = 0;
 char risposta1[13], risposta2[4];

do
{printf("inserisci tipo di consumazione: bevande/ristorazioni\n");
scanf("%s", risposta1);
do
{printf("inserisci tipo importo\n");
scanf("%lf", &importo);
} while (importo <= 0);
if(risposta1 == "ristorazioni")
{
importorist = importorist + importo;
ristorazione++;
}

if(risposta1 == "bevande")
{importobev = importobev + importo;
bevande++;}
printf("vuoi uscire ? n/esci");
scanf("%s", risposta2);
} while (risposta2 != "esci");


mediarist = mediarist/ristorazione;
mediabev = mediabev/bevande;
printf("media ristorazioni%f", mediarist);
printf("media bevande%f", mediabev);

if (bevande > ristorazione)
 printf("sono state vendute piu bevande\n");
else 
printf("sono state vendute piu ristorazioni\n");


  return 0; 
}