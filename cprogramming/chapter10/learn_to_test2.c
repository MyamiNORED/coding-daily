#include <stdio.h>
#include <assert.h>

// Function prototype
int add(int x, int y);

int main() {
    // Test cases with detailed output
    int result;

    // Test case 1
    result = add(2, 3);
    printf("Test 1: add(2, 3) = %d (expected 5)\n", result);
    assert(result == 5);

    // Test case 2
    result = add(-1, 1);
    printf("Test 2: add(-1, 1) = %d (expected 0)\n", result);
    assert(result == 0);

    // Test case 3
    result = add(0, 0);
    printf("Test 3: add(0, 0) = %d (expected 0)\n", result);
    assert(result == 0);

    printf("All tests passed!\n");

    return 0;
}

// Example implementation of the add function
int add(int x, int y) {
    return x + y;
}

