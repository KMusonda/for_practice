#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main()
{
	pid_t my_pid, my_ppid;

	my_pid=getpid();
	printf("pid is %u\n", my_pid);
	
	my_ppid=fork();
	printf("ppid is %u\n", my_ppid);

	return 0;
}
