#include<stdio.h>
int main() {
    int K,E,H,S,SS,M;
    float T;
    printf("Enter the kannada marks: ");
    scanf("%d", &K);
    printf("Enter the English marks: ");
    scanf("%d", &E);
    printf("Enter the Hindi marks: ");
    scanf("%d", &H);
    printf("Enter the Science marks: ");
    scanf("%d", &S);
    printf("Enter the Social marks: ");
    scanf("%d", &SS);
    printf("Enter the Maths marks: ");
    scanf("%d", &M);
     T = (K+E+H+S+SS+M)/6;
    printf("Total Percentage is: %f", T);
    return 0;
}
    
