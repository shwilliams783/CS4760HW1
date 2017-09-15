#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int main (int argc, char *argv[]) {  
pid_t childpid = 0;
int h, i, j, n;
char errMessage[80];   
char *xParam = NULL;
char *hParam = NULL;
int c;
char* mybuf[80];
int nchars;

while ((c = getopt (argc, argv, "x:h:")) != -1)
	switch (c)
    {
		case 'x':
			xParam = optarg;
			break;
		case 'h':
			hParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (xParam);
h = atoi (hParam);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  
for(j = 0; j < h; j++)
{
	mybuf[j] = getchar();
}
mybuf[h] = '\0';
fprintf(stderr, "process ID:%ld %s\n", (long)getpid(), mybuf);
return 0;
}
