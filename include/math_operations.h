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
/**
 * @file math_operations.h
 * @author DANIIL KUROCHKIN
 * @brief Mathematical operations library
 * @version 1.0
 */