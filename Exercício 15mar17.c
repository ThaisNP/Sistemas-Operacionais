#include <stdio.h>
#include <unistd.h>

int main () {
	int i;
	printf("\nINICIO\n");
	printf("pid do Pai: %d\n", getpid());
	getchar();
	printf("1: %d\n", i);
	i = fork();
	printf("2: %d\n", i);
	printf("3: %d\n", i);
	getchar();
	
	printf("\nFIM\n");
	 
	 return 0;
}
