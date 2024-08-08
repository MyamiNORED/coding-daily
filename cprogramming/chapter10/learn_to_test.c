#include <stdio.h>
#include <assert.h>

// Function prototype
int add(int x, int y);
int add (int x , int y) {
	 	
	return x + y;

}
int main() {
    // Examples and tests
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);

    printf("All tests passed!\n");

    return 0;
}

