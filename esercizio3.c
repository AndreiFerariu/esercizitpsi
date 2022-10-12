#include <stdio.h>
#include <stdlib.h>

void menu()
{

    printf("\n\n1 Stampa\n");
    printf("2 Stampa inversa\n");
    printf("3 Somma e media dell'array\n");
    printf("4 Stampa numeri pari\n");
    printf("5 Stampa numeri dispari\n");
    printf("6 Ricerca\n");
    printf("7 Elimina\n");
    printf("8 Scambio\n");
    printf("9 Ordinamento\n");
    printf("10 Esci\n");
}

void inserisci(int n, int array[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
}

void stampa(int n, int array[])
{
    for (int i = 0; i < n; i++)
        printf("%d,", array[i]);
}
void stampa_inversa(int n, int array[])
{
    int z = 0, b = n - 1;
    for (int i = 0; i < n / 2; i++, b--)
    {
        z = array[i];
        array[i] = array[b];
        array[b] = z;
    }
    stampa(n, array);
}
void somma_media(int n, int array[], int *somma, double *media)
{

    for (int i = 0; i < n; i++)
    {
        *somma = *somma + array[i];
    }
    *media = *somma / n + 1;
}
void stampa_pari(int n, int array[])
{
    printf("numeri pari dell'array:\n\n");
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
            printf("%d", array[i]);
    }
}
void stampa_dispari(int n, int array[])
{
    printf("numeri dispari dell'array:\n\n");
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
            printf("%d", array[i]);
    }
}

int ricerca(int n, int array[], int *indice)
{
    int numero_da_cercare = 0, valore_ricerca = 0;
    *indice = 0;
    scanf("%d", &numero_da_cercare);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == numero_da_cercare)
        {
            valore_ricerca++;
            *indice = i;
        }
    }
    return valore_ricerca;
}

void elimina(int *n, int array[], int *indice, int trovato)
{
    if (trovato != 0)
    {
        for (int i = *indice; i < *n; i++)
        {
            if (i < *n)
                array[i] = array[i + 1];
            if (i == n - 1)
                array[i] = 0;
        }
        (*n)--;
    }

    else
        printf("numero non trovato\n");
}

void scambia(int n, int array[])
{
    int z = 0;
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            z = array[i];
            array[i] = array[i + 1];
            array[i + 1] = z;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                z = array[i];
                array[i] = array[i + 1];
                array[i + 1] = z;
            }
        }
    }
}

void crescente(int n, int array[])
{

    int temp = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - 1 - i; k++)
        {
            if (array[k] > array[k + 1])
            {
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
            }
        }
    }
}
    void decrescente(int n, int array[])
    {
        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = 0; k < n - 1 - i; k++)
            {
                if (array[k] < array[k + 1])
                {
                    temp = array[k];
                    array[k] = array[k + 1];
                    array[k + 1] = temp;
                }
            }
        }
    }

    int main(int argc, char *argv[])
    {
        int DIM = 0, scelta = 0, somma = 0, presente = 0, indice = 0, scelta2 = 0;
        double media = 0;
        printf("quanti numeri vuoi inserire?\n");
        scanf("%d", &DIM);
        printf("inserisci numeri\n");
        int array[DIM];
        inserisci(DIM, array);
        do
        {
            menu();
            scanf("%d", &scelta);

            switch (scelta)
            {
            case 1:
                printf("numeri dell'array:\n\n");
                stampa(DIM, array);
                break;
            case 2:
                printf("numeri inversi dell'array:\n\n");
                stampa_inversa(DIM, array);
                break;
            case 3:
                somma_media(DIM, array, &somma, &media);
                printf("la somma è %d\n", somma);
                printf("la media è %f\n", media);
                break;
            case 4:
                stampa_pari(DIM, array);
                break;
            case 5:
                stampa_dispari(DIM, array);
                break;
            case 6:
                printf("che numero vuoi cercare?:\n\n");
                presente = ricerca(DIM, array, &indice);
                if (presente != 0)
                    printf("valore presente e trovato %d volte\n", presente);
                else
                    printf("valore non presente\n");
                break;
            case 7:
             printf("che numero vuoi eliminare?\n");
              int trovato = ricerca(n, array, indice);
                elimina(&DIM, array, &indice, trovato);
                break;

            case 8:
                scambia(DIM, array);
                break;
            case 9:
                printf("1 = decrescente\n 2 = crescente\n");
                scanf("%d", &scelta2);
                if (scelta2 == 1)
                    decrescente(DIM, array);
                if (scelta2 == 2)
                    crescente(DIM, array);
                break;
            }

        } while (scelta != 10);
        return 0;
    }

