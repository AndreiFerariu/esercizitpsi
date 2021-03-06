#include <limits.h>
#include <stdio.h>

void AddNumbers(int numbers[], int DIM, int *i, int *sentinella)
{
    int z;

    printf("Enter a series of numbers, stop by entering the value -1\n");
    do
    {

        scanf("%d", &z);
        if (z != -1)
        {
            numbers[*i] = z;
            (*i)++;
            (*sentinella)++;
        }
    } while (z != -1 && z < DIM);
}

void ShowNumbers(int numbers[], int *i)
{

    for (int a = 0; a < *i; a++)
    {
        if (a == 0)
        {
            printf("numbers entered\n");
            printf("%d,", numbers[a]);
        }
        else
            printf("%d,", numbers[a]);
    }
}
void EnterLastNumber(int numbers[], int *i)
{
    printf("enter a number in the last position\n");
    scanf("%d", &numbers[*i]);
    (*i)++;
}

void Modify(int numbers[])
{
    int pos;
    printf("which position to change?\n");
    scanf("%d", &pos);

    if (pos >= 0)
    {
        printf("enter the new number\n");
        scanf("%d", &numbers[pos]);
    }
    else
        printf("unidentified number\n");
}

void delete (int numbers[], int *i)
{
    int SrchN, cnt = 0;
    printf("which number to delete?\n");
    scanf("%d", &SrchN);

    for (int w = 0; w < (*i); w++)
    {

        if (numbers[w] == SrchN)
        {
            cnt = 2;
            printf("number deleted\n");
        }
        
            if (cnt == 2)
            numbers[w] = numbers[w + 1];
        
    }
(*i)--;
    if (cnt == 0)
{(*i)++;
        printf("number doesn't exists\n");}
}

void search(int numbers[], int *sentinella)
{
    int SrchN, cnt = 0;
    printf("which number to search?\n");
    scanf("%d", &SrchN);

    for (int b = 0; b < *sentinella; b++)
    {

        if (numbers[b] == SrchN)
        {
            cnt = b;
            printf("number %d exist in posistion%d\n", SrchN, cnt);
        }
    }

    if (cnt == 0)
        printf("number doesn't exists\n");
}

void delNmbPos(int numbers[], int *i)
{
    
int Srch, cnt = 0;
    printf("which posistion to delete?\n");
    scanf("%d", &Srch);

    for (int w = 0; w < (*i); w++)
    {

        if (w == Srch)
        {
            cnt = 2;
            printf("number deleted\n");
        }
        
            if (cnt == 2)
            numbers[w] = numbers[w + 1];
        
    }
(*i)--;

    
}



int main(int argc, char *argv[])
{

    int DIM = SHRT_MAX;
    int i = 0, sentinella = 0;
    int numbers[DIM];

    AddNumbers(numbers, DIM, &i, &sentinella);
    int p;

    do
    {

        printf("\npress 1 to show numbers\n");
        printf("press 2 to enter a number in the last position\n");
        printf("press 3 to modify a number\n");
        printf("press 4 to delete a number\n");
        printf("press 5 to search a number\n");
        printf("press 6 to delete a number with position\n");
        printf("press 0 to exit\n");
        scanf("%d", &p);
        switch (p)
        {
        case 1:
            ShowNumbers(numbers, &i);
            break;
        case 2:
            EnterLastNumber(numbers, &i);
            break;
        case 3:
            Modify(numbers);
            break;
        case 4:
            delete (numbers, &i);
            break;
        case 5:
            search(numbers, &sentinella);
            break;
        case 6:
            delNmbPos(numbers, &i);
            break;
            
        }
    } while (p > 0 && p <= 6);

    return 0;
}
