#include<stdio.h>
int main() {
    int lim,f;
    printf("enter limit of array\n");
    scanf("%d",&lim);
    int a[lim],b[lim],c[lim];
    {
        printf("enter function no.\n");
        scanf("%d",&f);
    }
    switch (f) {
        case 1:
            int i,sum;
            float avg;
            for (i=0;i<lim;i++) {
                printf("enter elements a\n");
                scanf("%d",&a[i]);
            }
            for (i=0;i<lim;i++) {
                printf("enter elements b\n");
                scanf("%d",&b[i]);
            }
            for (i=0;i<lim;i++) {
                sum+=a[i]+b[i];
            }
            avg=(float)sum/(2*lim);
            printf("Total sum: %d\n", sum);
            printf("Average: %.2f\n", avg);
            for (i=0;i<lim;i++) {
                c[i]=a[i]+b[i];
            }
            for (i=0;i<lim;i++) {
                printf("index wise sum:c[%d]=%d\n",i,c[i]);
            }
            break;
        case 2: {
            int i;
            for (i=0;i<lim;i++) {
                printf("enter elements a\n");
                scanf("%d",&a[i]);
            }
            for (i=0;i<lim;i++) {
                c[i]=a[i];
                printf("copied c[%d]=%d\n",i,c[i]);
            }
        }
            break;
        case 3: {
            int i,sum_a,sum_b;
            for (i=0;i<lim;i++) {
                printf("enter elements a\n");
                scanf("%d",&a[i]);
            }
            for (i=0;i<lim;i++) {
                printf("enter elements b\n");
                scanf("%d",&b[i]);
            }
            sum_a=0;
            sum_b=0;
            for (i=0;i<lim;i++) {
                sum_a+=a[i];
                sum_b+=b[i];
            }
            printf("sum of arr_1: %d\n",sum_a);
            printf("sum of arr_2: %d\n",sum_b);
        }
            break;
    }
    return 0;
}
















