#include <stdio.h>
int main() {
	int T;
  printf("Enter the number of text cases: ");
	scanf("%d", &T);
	while(T--) {
	    int N;
      printf("Enter the number: ");
	    scanf("%d", &N);
	    int lastdigit= N % 10;
	    int firstdigit = N;
	    while(firstdigit >= 10) {
    firstdigit/= 10;
}
	    int SUM= lastdigit+firstdigit;
printf("%d\n", SUM);
	}
}
