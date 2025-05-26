#pragma once

// Структура для результата деления
struct DivisionResult {
    int quotient;
    float remainder;
};

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
DivisionResult divide(int a, int b); // Изменено для возврата структуры