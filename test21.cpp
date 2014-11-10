//验证共享内存（引用指针)
//ipcs -m 查看ipc共享
//ipcrm -m key 手动删除ipc共享
//g++ -g -Wall test21.cpp -o test21
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <errno.h>
#include <sys/wait.h>


using namespace std;

typedef struct {
	char *name;
} shm_shared_t;

int main()
{

	key_t ipc_shm_key = ftok("/dev/null", (int)'a');
	int shm_id = 0;
	shm_id = shmget(ipc_shm_key, sizeof(shm_shared_t), IPC_CREAT|0666);
	
	shm_shared_t *shm_ptr = (shm_shared_t *)shmat(shm_id, NULL, 0);
	const char *name = "lijianwei";
	shm_ptr->name = const_cast<char *>(name);

	pid_t pid = 0;
	pid = fork();
	if (pid == 0) {
		shm_shared_t *shm_ptr = (shm_shared_t *)shmat(shm_id, NULL, 0);
		printf("shm_ptr->name: %s\n", shm_ptr->name);
		shm_ptr->name = const_cast<char *>("weiyanping");
		sleep(1);
		exit(EXIT_SUCCESS); 
	}

	pid = fork();
	if (pid == 0) {	
		shm_shared_t *shm_ptr = (shm_shared_t *)shmat(shm_id, NULL, 0);
                printf("shm_ptr->name: %s\n", shm_ptr->name);
		sleep(1);
		exit(EXIT_SUCCESS);
	}
	
	int status = 0;
	pid_t cPid = 0;
	while ((cPid = wait(&status)) > 0) {
		printf("child pid: %d done\n", cPid);
		printf("shm_ptr->name:%s\n", shm_ptr->name);
	}
	int ret = shmctl(shm_id, IPC_RMID, NULL);
	printf("%d\n", ret);

	
	return 0;
}
