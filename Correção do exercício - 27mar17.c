#include <stdio.h>
#include <unistd.h>

int main () {
	int i;
	
	printf("Antes do fork:\n");
	//getchar();
	
	i = fork();
	
	printf("Depois do fork:\n");
	//getchar();
	
	printf("%d\n", i);
	
	if (i == 0){
		printf("Eu sou o processo filho.\n");
	}
	
	else {
		printf("Meu processo filho é o: %d\n" , i);
	}
	 
	 return 0;
}
