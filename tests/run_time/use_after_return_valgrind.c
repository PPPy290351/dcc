//dcc_flags="--valgrind"

#include <stdio.h>

int * f(int num) {
    int factors[50];
    int count=1;
    int localNum = num;
    for(int x=2; x <= localNum-1; x++) {
        if(num % x == 0) {
            factors[count] = x;
            count++;
        }
    }
    factors[0] = count;
    int *factorPointer = factors;
    return factorPointer;

}

int main(void) {
	printf("%d\n", *f(50));
}
