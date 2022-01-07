#include <stdio.h>
#include "s21_decimal.h"

int main() {
    int a = 75, bin_num[32];

    decToBin(a, bin_num);
//    for (int i = 31; i >= 0; --i) {
//        printf("%d ", bin_num[i]);
//    }
//    if (bin_num[0] == 1) bin_num[0] = 0;
//    else bin_num[0] = 1;

    binToDec(bin_num, &a);
//    printf("\n%d", a);
    float b = -15.3;
    s21_decimal one;
    one.bits[0] = 153;
    one.bits[1] = 0;
    one.bits[2] = 0;
    one.bits[3] = 257;
    one = s21_negate(one);
    decToBin(one.bits[3], bin_num);
    double power = 0;
    for (int i = 8; i <= 15; i++)
        if (bin_num[i] == 1) power += pow(2, i - 8);

    if (one.bits[3] % 2 == 1) printf("%c%lf", '-', one.bits[0] * pow(10, -power));
    else printf("%lf", one.bits[0] * pow(10, -power));

    return 0;
}
