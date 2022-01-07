#include "s21_decimal.h"


s21_decimal s21_negate(s21_decimal tt) {
    int buf[32];
    decToBin(tt.bits[3], buf);
    if (buf[0] == 1) buf[0] = 0;
    else buf[0] = 1;
    binToDec(buf, &tt.bits[3]);
    return tt;
}


void decToBin(int num, int *bin) {
    int i = 0;
    while (num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i; j < 32; ++j) {
        bin[j] = 0;
    }
}

void binToDec(const int bin[], int *num) {
    double sum = 0;
    for (int i = 0; i < 32; i++)
        if (bin[i] == 1) sum += pow(2, i);
    *num = (int) sum;
}