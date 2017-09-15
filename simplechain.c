#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int main (int argc, char *argv[]) {  
pid_t childpid = 0;
int i, n;
char errMessage[80];   

if (argc != 2){ /* check for valid number of command-line arguments */
        strcat(errMessage, argv[0]);
		strcat(errMessage, ": Error");
        perror( errMessage );
        return 1;
}       
n = atoi (argv[1]);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
return 0;
}
