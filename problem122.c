/*****************************
    Project Euler
        Problem 122
*****************************/
#include <stdio.h>
#include <stdint.h>

int mk(int32_t k) {
    int32_t i, one_counter = 0, top_position = 0;
    for(i = 0; i < 32; i++){
        if((k >> i) & 1 == 1) {
            one_counter++;
            top_position = i + 1;
        }
    }
    return one_counter + top_position - 2;
}

int sum(int32_t n) {
    int32_t k;
    int ans = 0;
    for(k = 1; k <= n; k++) {
        ans += mk(k);
    }
    return ans;
}

int main(void) {
    printf("%d\n", mk(31));
    return 0;
}
