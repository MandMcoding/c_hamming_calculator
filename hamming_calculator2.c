#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
//for each bit in 1, check if it matches 2, if yes then ++, if one is longer than the other return lengths not equal
//could use xor
// O(n) complexity
	if(argc != 3){
		fprintf(stderr, "Please have two values.");
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	int count = 0;
	while((a % 10 != a % 100) && (b % 10 != b % 100)){
		count += a % 10 != b % 10;
		a /= 10; b /= 10;
	}
	if(a != b) count++;

	printf("%d\n", count);

	return 0;
}
/*
123 % 10 = 3
123 / 10 = 12

111
101

111 % 10 = 1
1011 % 10 = 1
1 = 1
111 / 10 = 11
*/
