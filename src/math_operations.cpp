#include "../include/math_operations.h"

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }

DivisionResult divide(int a, int b) {
    DivisionResult result;
    result.quotient = a / b;
    result.remainder = a % b;
    return result;
}