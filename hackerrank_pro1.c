//hackerrank program on pointers to get sum and diff
#include <stdio.h>
#include<math.h>

void update(int *a,int *b)
{
   *a=*a+*b;
   *b=abs(*a-(2**b));
}
int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter two values\n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("sum=%d\ndiff=%d", a, b);

    return 0;
}
