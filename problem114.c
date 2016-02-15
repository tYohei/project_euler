/*****************************
    Project Euler
        Problem 114
*****************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define N 50 

int64_t *bcs;

int64_t bc(int64_t n) {
    
    int64_t ans = 0;

    if(n < 1) return 0;
    else if(bcs[n - 1] != 0) return bcs[n - 1];
    else {
        switch(n) {
            case 1:
            case 2:
                ans = 1;
                break;
            case 3:
                ans = 2;
                break;
            case 4:
                ans = 4;
                break;
            case 5:
                ans = 7;
                break;
            case 6:
                ans = 11;
                break;
            default:
                ans += bc(n - 1) + bc(n - 3) + bc(n - 5) + bc(n - 6);
                break; 
        }
        bcs[n - 1] = ans;
        return ans;
    }
}

int main(void) {

    int i;

    bcs = (int64_t *)malloc(N * sizeof(bcs[0]));
    if(!bcs) {
        printf("Failed to allocate memory!\n");
        return -1;
    }
    for(i = 0; i < N; i++) {
        bcs[i] = 0;
    }

    printf("%ld\n", bc(N));
    return 0;
}
