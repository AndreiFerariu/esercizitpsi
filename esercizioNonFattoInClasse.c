#include <stdio.h>
#include <stdlib.h>
int SearchNumber(int argc, char *argv[], int number)
{
for(int i = 1; i< argc; i++)
{
if(atoi(argv[i]) == number)
return i;
}
return -1;
}
int main(int argc, char *argv[])
{
    int number, nFound;
printf("enter a number that you want search\n");
scanf("%d", &number);
nFound = SearchNumber(argc, argv, number);
if(nFound == -1 )
printf("Number %d not found\n, number");
else 
printf("Number %d found in position %d\n",number, nFound);
}
