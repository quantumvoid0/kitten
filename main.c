#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *fptr;

	fptr = fopen(argv[1], "r");
	char x[1000];
	while (fgets(x,1000,fptr)) {
		printf("%s",x);
	};

	return 0;
};
