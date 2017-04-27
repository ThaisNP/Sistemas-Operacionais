#include <stdio.h>
#include <pthread.h>

void *OLA (void *argumentos) {
	printf("\nOla\n");
	pthread_exit(NULL);
}

int main() {
	pthread_t thread;
	int flag, i;

	printf ("Criando uma nova thread\n");
	flag = pthread_create(&thread, NULL, OLA, NULL);
	if (flag!=0)
		printf ("Erro na criação de uma nova thread\n");

	OLA(NULL);
	pthread_exit(NULL);
	
	return 0;
}