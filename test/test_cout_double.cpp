
#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);//换成 %f 会无法正确输入

    printf("%f\n", a);
    printf("%.5f\n", a);
    printf("%lf\n", a);
    printf("%e\n", a);
    printf("%g", a);
}
