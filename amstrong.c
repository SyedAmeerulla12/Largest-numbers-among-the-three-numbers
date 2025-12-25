#include <stdio.h>

int main() {
    int n = 153, r, sum = 0, temp;
    temp = n;
    while(n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if(temp == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
