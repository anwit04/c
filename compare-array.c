#include<stdio.h>
int main() {
    int i,lim;
    printf("enter limit\n");
    scanf("%d",&lim);
    float a[lim],b[lim];
    for (i=0;i<lim;i++)
    {
        printf("enter nos a\n");
        scanf("%f",&a[i]);
    }
    for (i=0;i<lim;i++) {
        printf("enter nos b\n");
        scanf("%f",&b[i]);
    }
    for (i=0;i<lim;i++) {
        if (a[i]==b[i]) {
            printf("a[%d](%.2f)elements are same b[%d](%.2f)\n",i,a[i],i,b[i]);
        }
    }
        for (i=0;i<lim;i++) {
            if (a[i]>b[i]) {
                printf("a[%d](%.2f)element in arr1 bigger in pos.b[%d](%.2f)\n",i,a[i]);
            }
        }
        for (i=0;i<lim;i++) {
            if (b[i]>a[i]) {
                printf("b[%d](%.2f)elements in array 2 bigger a[%d](%.2f)\n",i,b[i]);
            }
        }
        for (i=0;i<lim;i++) {
            if (a[i]==0 && b[i]==0) {
                printf("no valid elements(0\n is not accepted)\n");
            }
        }
        return 0;
    }









