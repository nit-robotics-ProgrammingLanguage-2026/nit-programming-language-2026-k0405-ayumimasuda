#include <stdio.h>

int main(void) {
    /* 課題0405 */
    double x;
    double a;

    scanf("%lf", &x);
    a = x / (3.141592 * 4 / 2) * 360;
    printf("%f", a);

    return 0;
}
