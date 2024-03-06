#include <stdio.h>
#include <math.h>

int divisor_sum(int x) {
    if (x==1) return 0;
    int sum = 1;
    int d;
    for (d=2; d*d <= x; d++) {
        if (x % d == 0) {
            sum += d;
            if (x/d != d) sum += x/d;
        }
    }
    return sum;
}

int main() {
    int l, r;
    int i;
    int count = 0;
    scanf("%d %d",&l, &r);
    for (i=l; i<=r; i++){
	if (divisor_sum(i)>i){
	count++;
	} 
	}
	
	printf("%d",count);
    return 0;
}
