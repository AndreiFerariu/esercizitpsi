#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

#define READ 0
#define WRITE 1

/*Il processo P0 deve generare 2 processi figli: P1 e P2.
P1 deve interagire con l'utente, richiedendo delle stringhe (di lunghezza
massima pari a 50 caratteri) che provvede ad inviare a P2 utilizzando una pipe.
Il processo P1 continua a ricevere stringhe fin quando non riceve la stringa
"esci".
Il processo P2 legge le stringhe dalla pipe e le scrive in
ordine alfabetico nel file risultati.txt
*/

int main(int argc, char *argv[])
{

    int P0, p0p1[2];
    char stringa[50];

    pipe(p0p1);
   
    printf("inserisci stringa max 50 caratteri:   per uscire scrivi 'esci'\n");
    P0 = fork();
    if (P0 == 0)
    { 
        close(p0p1[READ]);
        while (1)
        {  
             scanf("%s", stringa);
            if (strcmp(stringa, "esci") == 0)
            {
            close(p0p1[WRITE]);
             exit(0);
            }
            strcat(stringa, "\n");
            write(p0p1[WRITE], stringa, strlen(stringa));
        }
        
    }

    P0 = fork();

    if (P0 == 0)
    {
        close(p0p1[WRITE]);
        close(READ);
        dup(p0p1[READ]);
        close(p0p1[READ]);
        close(WRITE);
        open(argv[1], O_WRONLY || O_CREAT, NULL);
        execl("/usr/bin/sort", "sort", NULL);
        return -1;
    }
    close(p0p1[WRITE]);
    close(p0p1[READ]);
    wait(&P0);
    return 0;
}