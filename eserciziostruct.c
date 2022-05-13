#include <stdio.h>
#include <string.h>

typedef struct 
{

    char nome[20];
    char team[20];
    char ruolo[20];
} calciatore_T;

void insCalciatore(calciatore_T calciatori[])
{
     
    for (int i = 0; i < 5; i++)
    {
        printf("inserisci nome calciatore\n");
        scanf("%s", calciatori[i].nome);
        printf("inserisci team calciatore\n");
        scanf("%s", calciatori[i].team);
        printf("inserisci ruolo calciatore\n");
        scanf("%s", calciatori[i].ruolo);
    }
}

void visualizza(calciatore_T calciatori[])
{

    for (int i = 0; i < 5; i++)
    {

        if (strcmp(calciatori[i].team, "milan") == 0)
            printf("%s\n", calciatori[i].nome);
    }
}

void visualizzaNmC(calciatore_T calciatori[])
{

    for (int i = 0; i < 5; i++)
    {

            if (calciatori[i].nome[0] == 'c')
            printf("%s\n", calciatori[i].nome);
        
    }
}

int main(int argc, char *argv[])
{
    calciatore_T calciatori[5];

    insCalciatore(calciatori);
    printf("nome calciatore milan\n");
    visualizza(calciatori);
    printf("nome calciatore che inicia con la c\n");
    visualizzaNmC(calciatori);
    return 0;
}