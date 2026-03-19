#include <stdio.h>
#include <math.h>
int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
	    int N;
	    scanf("%d", &N);
	    int squareRoot = (int)sqrt(N);
	    printf("%d\n", squareRoot);
	}
    return 0;
}
