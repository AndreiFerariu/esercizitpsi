#include <stdio.h>
#include <string.h>
int controlloSoloStringhe(char stringa[])
{
    for (int i = 0; i < strlen(stringa); i++)
    {
        if (stringa[i] < 65 || stringa[i] > 122)
            return -1;
    }
    return 0;
}

void vocali(char stringa[], int *vocaliNum, int *consonantiNum)
{

    for (int i = 0; i < strlen(stringa); i++)
    {

        if (stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u')
            (*vocaliNum)++;
        else
            (*consonantiNum)++;
    }
}

int controlloLettera(char stringa[], char parola)
{
    int conteggioParola = 0;
for(int i = 0; i<strlen(stringa);i++)
{
 if(stringa[i] == parola)
  conteggioParola++;
}
return conteggioParola;
}
int main()
{
    int n = 20;
    char stringa[n];
    char parola;
    int vocaliNum = 0, consonantiNum = 0, conteggioPar = 0;

    printf("inserisci una stringa\n");
    scanf("%s", stringa);
    
    if (controlloSoloStringhe(stringa) == 0)
    {
        vocali(stringa, &vocaliNum, &consonantiNum);
        printf("inserisci una lettera da trovare\n");
        scanf(" %c", &parola);
        conteggioPar = controlloLettera(stringa, parola);





        printf("vocali presenti: %d\n", vocaliNum);
         printf("consonanti presenti: %d\n", consonantiNum);
         printf("lettere trovate %d\n", conteggioPar);
    }
    else
        printf("stringa non approvata\n");



        return 0;
}