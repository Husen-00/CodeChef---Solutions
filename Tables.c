#include<stdio.h>
int main() {
  int t;
printf("Enter the number of test cases: ");
scanf("%d", &t);
while(t--) {
int num;
printf("Enter the number: ");
scanf("%d\n", &num);
for(int i=1; i<=10; i++) {
printf("%d\n", (num*i));
  }
}
  return 0;
}
