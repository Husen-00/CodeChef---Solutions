#include<stdio.h>
#include<limits.h>

int main()
{
    int a[] = {10,5,8,20,15};
    int n = 5;

    int l = INT_MIN, s = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i] > l)
        {
            s = l;
            l = a[i];
        }
        else if(a[i] > s && a[i] != l)
            s = a[i];
    }

    printf("Second largest = %d", s);
}
