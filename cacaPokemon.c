#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[]) {

	char pokemon = *argv[1];

	if (pokemon == 'p') {
		execv("./pikachu", *argv[1]);
	}
	
	
}