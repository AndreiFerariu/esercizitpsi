#include <stdio.h>
#include <string.h>

int main(int argc, char  *argv[])
{
int lunghezza , i = 0, data, giorno, mese, anno;



lunghezza = strlen(argv[1]);
giorno = ((int) argv[1][0] - 48 ) * 10 + (int) argv[1][1] - 48 ;
mese = ((int) argv[1][2] - 48 ) * 10 + (int) argv[1][3] - 48;
anno = ((int) argv[1][4] - 48 ) * 1000 + ((int) argv[1][5] - 48) *100 + ((int) argv[1][6] - 48) *10 +((int) argv[1][7] - 48);

if(lunghezza == 8 && giorno< 32 && mese<13 && anno < 2023)
{

printf("%s\n", argv[1]);

}
    else 
    printf("non è una data:\n" );


return 0;


}