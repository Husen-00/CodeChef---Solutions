#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0) {                  // also if((n&1)==0)
        printf("The %d is Even",n);
    }
    else {
        printf("The number %d is odd",n);
    }
    return 0;
}