#include <stdio.h>

int main(int argc, char **argv) {
	int fk = fork();
	int child=0;
	switch(fk){
		case -1:
		   fprintf(stderr, "Resources unavailable");
		   return (0);
		case 0:
		   printf("I am a child, and I borned\n");
		   child++;
		   break;
		default:
		   printf("I am the parent and I am going to sleep");
		   sleep(60);
	}
	printf("%s exiting", (child?"child":"parent"));
	return(0);
}
