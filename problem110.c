/****************************
    Project Euler
        Problem No.110
****************************/
/****************************************************************
    Answer : 9350130049860600
        which is 2*2*2 * 3*3*3 * 5*5 * 7*7 
                    * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37

****************************************************************/
#include <stdio.h>
#include <stdint.h>     // Using int64_t
#include <stdlib.h>     // Using malloc and free

int n_solution(int64_t n) {

    int64_t startx = n + 1, endx = 2*n;
    int64_t x = startx;
    int64_t count = 0;
    for(x = startx; x <= endx; x++) {
        if((n*x)%(x - n) == 0) count++;
    }
    return count;
}

int main(void) {

    int64_t start_n = 14604012649306080;
    int64_t end_n = 14604012649306081;

    int64_t i = 0;
    for(i = start_n; i < end_n; i++) {
        int ans = n_solution(i);
        if(ans >= 600) {
            printf("n = %ld : counter : %d\n", i, ans);
            break;
        }
    }
    
    return 0;
}
