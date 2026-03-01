#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>99 && n<1000) {
        printf("The %d is Three digit number",n);
    }
    else {
        printf("The %d is not Three digit number",n);
    }
    return 0;
}