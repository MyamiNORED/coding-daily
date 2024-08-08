#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<assert.h>
bool isMagicSquare(int n ,int c[n][n]){
int row = 0 ;
int col = 0;
int di = 0 ;
int e = 0 ;
int d = 0;
int t = 0;
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row = row + c[i][j];
            col = col + c[j][i];
            di = di + c[e][d];
            e = i + 1;
            d = j + 1;
        }
        printf("%d %d %d\n",row, col,di);
        if( row == col ){ t = t + 1;}
        row = 0;col =0 ; di = 0;
    }

if (t == n ) { 
    return true;}
    
else {return false ;}

}
// Test Case 1
void test_case_1() {
    int n = 3;
    int square[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    assert(isMagicSquare(n, square) == true);
}




// Test Case 2
void test_case_2() {
    int n = 3;
    int square[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    assert(isMagicSquare(n, square) == false);
}


// Test Case 3
void test_case_3() {
    int n = 4;
    int square[4][4] = {
        {16, 2, 3, 13},
        {5, 11, 10, 8},
        {9, 7, 6, 12},
        {4, 14, 15, 1}
    };
    assert(isMagicSquare(n, square) == true);
}




int main() {
    test_case_1();
    test_case_2();
    test_case_3();    

    printf("All test cases passed!\n");

    return 0;
}


   
