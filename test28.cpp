//验证父进程挂了之后，子进程过继给1进程
#include <iostream>

#include <stdio.h>
#include <stdlib.h>


using namespace std;



int main()
{
	pid_t pid = fork();
	if (pid == 0) {
		cout << "parent pid" << getppid() << endl;

		sleep(2);
		
		cout << "parent pid" << getppid() << endl;
		
		//cout << "lijianwei" << endl;

	} else if (pid > 0) {
		
		sleep(1);
		
		exit(0);
	}

	return 0;

}
