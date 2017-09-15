#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int main (int argc, char *argv[]) {  
pid_t childpid = 0;
int i, j, n, m, k;
char errMessage[80];   
char *xParam = NULL;
char *mParam = NULL;
char *kParam = NULL;
int c;

while ((c = getopt (argc, argv, "x:m:k:")) != -1)
	switch (c)
    {
		case 'x':
			xParam = optarg;
			break;
		case 'm':
			mParam = optarg;
			break;
		case 'k':
			kParam = optarg;
			break;
		case '?':
			return 1;
		default:
			abort ();
    }

n = atoi (xParam);
m = atoi (mParam);
k = atoi (kParam);
for (i = 1; i < n; i++) 
        if (childpid = fork()) 
                break;  
for(j = 0; j < k; j++)
{
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
	i, (long)getpid(), (long)getppid(), (long)childpid);
	sleep(m);
}
return 0;
}
