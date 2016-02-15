/****************************
    Project Euler
        Problem No.108
****************************/
#include <stdio.h>
#include <stdint.h>     // Using int64_t

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
    int64_t start_n = 10000;
    int64_t end_n = 1000000;
    int64_t i = 0;
    for(i = start_n; i < end_n; i++) {
        int ans = n_solution(i);
        if(ans > 1000) {
            printf("n = %ld : counter : %d\n", i, ans);
            break;
        }
    }

    return 0;
}
