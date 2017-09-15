#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int main (int argc, char *argv[]) {  
pid_t childpid = 0;
int i, n;
char errMessage[80];   
char *xParam = NULL;
int c;

while ((c = getopt (argc, argv, "x:")) != -1)
	switch (c)
    {
		case 'x':
			xParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (xParam);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  

sleep(10);
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
return 0;
}
