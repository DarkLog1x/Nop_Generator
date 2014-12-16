#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
	
	if(argc < 2){
		printf("Add a number of characters!\n");
		return 0;
	}

	char array[] = {'\x40', '\x43', '\x41', '\x42', '\x48', '\x4B', '\x49', '\x4A', '\x0f'};
	srand(time(NULL));
	
	int i;
	for(i = 0; i < atoi(argv[1]); i++){
		int random = rand() % sizeof(array);
		printf("\\x%x", array[random]);
	}

	printf("\n");

	return 0;
}