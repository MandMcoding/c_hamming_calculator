#include <stdio.h>
#include <stdlib.h>

// pb = print binary
void pb(int number) {
    //int bit_count = sizeof(int) * 8; 
		int bit_count = 3;
    for (int i = bit_count - 1; i >= 0; i--) {
        int bit = (number >> i) & 1;  
        printf("%d", bit);
    }
    printf("\n");  
}

int main(int argc, char** argv){
//for each bit in 1, check if it matches 2, if yes then ++, if one is longer than the other return lengths not equal
//could use xor
// O(n) complexity
	if(argc != 3){
		fprintf(stderr, "Please have two values.");
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int difference = a^b;
	int count = 0;
	pb(a);pb(b);
	pb(difference);
	printf("\n");
	while(difference != 0){
		pb(difference);
		printf("%d\n", count);
		if(difference % 2 == 1) count++;
		difference/=2;
	}
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
