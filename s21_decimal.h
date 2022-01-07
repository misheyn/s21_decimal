#ifndef S21_DECIMAL_S21_DECIMAL_H
#define S21_DECIMAL_S21_DECIMAL_H

#include <math.h>

typedef enum {
    s21_NORMAL_VALUE = 0,
    s21_INFINITY = 1,
    s21_NEGATIVE_INFINITY = 2,
    s21_NAN = 3
} value_type_t;

typedef struct {
    int bits[4];
    value_type_t value_type;
} s21_decimal;

s21_decimal s21_negate(s21_decimal);

void decToBin(int num, int *bin);
void binToDec(const int bin[], int *num);

#endif //S21_DECIMAL_S21_DECIMAL_H
