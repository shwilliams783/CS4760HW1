clean :
        rm *.o simplechain simplechainSleep simplechainLoop simplechainWait simplechainFprintf simplechainNchars
all : simplechain simplechainSleep simplechainLoop simplechainWait simplechainFprintf simplechainNchars
simplechain : simplechain.o
        gcc -g -o simplechain simplechain.o
simplechain.o : simplechain.c
        gcc -c -g simplechain.c
simplechainSleep : simplechainSleep.o
        gcc -g -o simplechainSleep simplechainSleep.o
simplechainSleep.o : simplechainSleep.c
        gcc -c -g simplechainSleep.c
simplechainLoop : simplechainLoop.o
        gcc -g -o simplechainLoop simplechainLoop.o
simplechainLoop.o : simplechainLoop.c
        gcc -c -g simplechainLoop.c
simplechainWait : simplechainWait.o
        gcc -g -o simplechainWait simplechainWait.o
simplechainWait.o : simplechainWait.c
        gcc -c -g simplechainWait.c
simplechainFprintf : simplechainFprintf.o
        gcc -g -o simplechainFprintf simplechainFprintf.o
simplechainFprintf.o : simplechainFprintf.c
        gcc -c -g simplechainFprintf.c
simplechainNchars : simplechainNchars.o
        gcc -g -o simplechainNchars simplechainNchars.o
simplechainNchars.o : simplechainNchars.c
        gcc -c -g simplechainNchars.c
