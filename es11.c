#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Numero argomenti sbagliato\n");
        exit(1);
    }

    int p1p2[2], pid, incremento_articolo;
    char articolo_iniziale[50], articolo_finale[50], stringa[50], buff[50], argomento_grep[];

    pid = fork();
    if (pid == 0)
    {
        pipe(p1p2);
        while (1)
        {
            printf("Inserisci articolo: \n");
            scanf("%s", stringa);
            if (strcmp(stringa, "esci") == 0)
            {
                close(p1p2[1]);
                printf("Esecuzione terminata, esco.\n");
                exit(0);
            }
            
            write(p1p2[1], stringa, sizeof(stringa));

              pid = fork();
            if (pid == 0)
            {
                 read(p1p2[0], buff, sizeof(buff));
                 sprintf(articolo_iniziale, "ART. %s.", buff);
                 sprintf(articolo_finale, "ART. %d.", atoi(buff)++);
                 sprintf(argomento_grep, "%s. %s ",articolo_iniziale,articolo_finale);
                execl("/usr/bin/grep", "-z", "-o", argomento_grep, argv[1], (char *)0);

                return -1;
            }
        
        }
        
    }
   close(p1p2[1]);
  close(p1p2[0]);

    return 0;
}