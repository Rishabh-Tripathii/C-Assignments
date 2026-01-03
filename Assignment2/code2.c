#include <stdio.h>
#include <string.h>
#include <math.h>
int k;
int main(void) {
    float A = 0, B = 0, i, j, z[1760];
    char b[1760];
    printf("\x1b[2J");
    for (;;) {
        memset(b, 32, sizeof(b));
        memset(z, 0, sizeof(z));
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float sini = sin(i), cosi = cos(i);
                float sinj = sin(j), cosj = cos(j);
                float sinA = sin(A), cosA = cos(A);
                float sinB = sin(B), cosB = cos(B);
                float cosj2 = cosj + 2;
                float mess = 1 / (sini * cosj2 * sinA + sinj * cosA + 5);
                float t = sini * cosj2 * cosA - sinj * sinA;
                int x = 40 + 30 * mess * (cosi * cosj2 * cosB - t * sinB);
                int y = 12 + 15 * mess * (cosi * cosj2 * sinB + t * cosB);
                int o = x + 80 * y;
                int N = 8 * ((sinj * sinA - sini * cosj * cosA) * cosB
                            - sini * cosj * sinA - sinj * cosA
                            - cosi * cosj * sinB);
                if (y > 0 && y < 22 && x > 0 && x < 80 &&
                    o >= 0 && o < 1760 && mess > z[o]) {
                    z[o] = mess;
                    int idx = N > 0 ? (N < 12 ? N : 11) : 0;
                    b[o] = ".,-~:;=!*#$@"[idx];
                }
            }
        }
        printf("\x1b[d");
        for (k = 0; k < 1760; k++)
            putchar(k % 80 ? b[k] : '\n');
        A += 0.04;
        B += 0.02;
    }
}
