/**
 * @file main.c
 * @author Shubhendra Pratap Singh
 * @date 2023-10-01
 * @version 1.0
 * @brief Main file for the arithmetic operations using 32-bit integers.
 * This file demonstrates basic arithmetic operations such as addition, subtraction,
 * multiplication, and division using 32-bit integers.
 */

#include <stdio.h>
#include <arith32.h>

int main(void) {
    int32_t a = 20, b = 5;

    printf("Addition: %d + %d = %d\n", a, b, arith32_add(a, b));
    printf("Subtraction: %d - %d = %d\n", a, b, arith32_subtract(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, arith32_multiply(a, b));
    printf("Division: %d / %d = %d\n", a, b, arith32_divide(a, b));

    return 0;
}
