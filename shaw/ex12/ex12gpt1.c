#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    // Step 1: Print the size of an int
    printf("Step 1: The size of an int: %ld\n", sizeof(int));

    // Step 2: Modify the size of areas array to only 3 elements
    int small_areas[] = {10, 12, 13};
    printf("Step 2: The size of areas (int[]): %ld\n", sizeof(small_areas));

    // Step 3: Print the size and content of name array
    printf("Step 3: The size of name (char[]): %ld\n", sizeof(name));
    printf("Step 3: name=\"%s\"\n", name);

    // Step 4: Change the size of full_name array
    char short_full_name[] = {'Z', 'e', 'd', '\0'};
    printf("Step 4: The size of short_full_name (char[]): %ld\n", sizeof(short_full_name));
    printf("Step 4: short_full_name=\"%s\"\n", short_full_name);

    // Step 5: Use GDB to inspect variables
    return 0;
}

