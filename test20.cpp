//验证 线程中创建多进程的例子
//g++ -g -Wall test20.cpp -lpthread -o test20
#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

void *test(void *arg)
{
	pid_t pid = fork();
	if (pid < 0) {
		perror("fork error");
	} else if (pid == 0) {
		cout << "child" << endl;
		sleep(10);
	} else if (pid > 0) {
		cout << "pid: " << pid << endl;
	}

	return NULL;
}

int main()
{
	pthread_t tid;
	int retcode = pthread_create(&tid, NULL, test, NULL);
	printf("%d\n", retcode);
	sleep(1);
	int status;
	pid_t pid = wait(&status);
	printf("child pid: %d die\n", pid);
	
	
	cout << "done" << endl;
	return 0;
}
