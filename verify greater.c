#include <stdio.h>
int main() {
    int a,b;
    printf("enter 2 nos:");
    scanf("%d%d", &a, &b);
    if (a==b) {
        printf("%d is same as",b,a);
    }
    else if (a==1||b==1)
        {
    printf("1\n");
}
    else if(a==0||b==0)
        {
    printf("0\n");
}
    else if (a==1&&b==1)
        {
        printf("both are 1\n");
    }
    else if (a>b) {
        printf("%d is greater",a);
    }
    else {
        printf("%d is greater",b);
    }
    return 0;
}