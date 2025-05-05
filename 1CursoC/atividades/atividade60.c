#include <stdio.h>
#include <math.h>

int main() {
    double x, S = 0.0;
    scanf("%lf", &x);

    for (int i = 1; i <= 25; i++) {
        double termo = pow(x, 26 - i) / i;
        if (i % 2 == 0) {
            S -= termo;
        } else {
            S += termo;
        }
    }

    printf("%.2lf\n", S);
    return 0;
}