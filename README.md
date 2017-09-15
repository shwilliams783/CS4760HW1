# CS4760HW1

# Command Line Options

# -x:
Required for each program in the repository; the x argument takes an integer, and determines the total number of processes to be run.

Example use: ./simplechain -x 19

# -k: -m:
Required to run simplechainLoop; k's argument determines the number of loop iterations,
and m's argument determines the sleep() duration in seconds. Both options require an integer parameter

Example use: ./simplechainLoop -x 19 -k 5 -m 10

# -h:
Required to run simplechainNchars; n's argument determines the number of chars to be stored in mybuff by using a loop.

Example use: ./simplechainNchars -x 19 -h 5

# Excerpt from Homwork Assignment Document

Unix System Calls and Library Functions

The goal of this homework is to become familiar with the environment in hoare while practising system calls. I’ll like to see
the use of perror and getopt in this submission. Do Exercise 3.8 (p. 87) in your text by Robbins/Robbins.

The exercise expands on the process chain of Program 3.1 in the book. So, you will need to study that code well. The process
chain is a vehicle to experiment with wait(2) and with sharing of devices. All of the processes in the chain created by
Program 3.1 share stdin, stdout, and stderr.

Your program should give some meaningful error messages. The format for error messages should be:

my_prog: Error: Detailed error message

where my_prog is actually the name of the executable (argv[0] ) that you are trying to execute.

What to handin

Handin an electronic copy of all the sources, README, Makefile(s), and results. Create your programs in a directory called
username.1 where username is your login name on hoare. Once you are done with everything, remove the executables and
object files, and issue the following commands:

chmod 700 username.1

cp -p -r username.1 ˜hauschild/cs4760/assignment1

Include the answers or comments to all the questions (1-8) in a file called Answers (make sure the case is correct).

Do not forget Makefile (with suffix or pattern rules), RCS, and README for the assignment. If you do not use RCS or
github, you will lose 10 points. I want to see the log of how the program files are modified. Therefore, you should use keyword
substitution within RCS inside your source files. I’ll like to see at least the use of Author, Date, and Log keywords. You must
check in the files at least once a day while you are working on them. Omission of a Makefile (with suffix rules) will result
in a loss of another 10 points, while README will cost you 5 points. I do not like to see any extensions on Makefile and
README files. Before the final submission, perform a make clean and keep the latest source checked out in your directory.

You do not have to hand in a hard copy of the project. Assignment is due by 11:59pm on the due date.
