#include <iostream>
#include <string>
#include "../include/math_operations.h"

void show_help() {
    std::cout << "Usage:\n"
              << "  calculator author - Show creator info\n"
              << "  calculator add <a> <b> - Addition\n"
              << "  calculator sub <a> <b> - Subtraction\n"
              << "  calculator mul <a> <b> - Multiplication\n"
              << "  calculator div <a> <b> - Division (returns quotient and remainder)\n";
}

void show_author() {
    std::cout << "Calculator v1.0\n"
              << "Created by DANIIL KUROCHKIN\n"
              << "Email: danechka@mail.ru\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        show_help();
        return 1;
    }

    std::string command(argv[1]);

    if (command == "author") {
        show_author();
    } else if (argc == 4) {
        float a = std::stof(argv[2]);
        float b = std::stof(argv[3]);

        if (command == "add") {
            std::cout << "Result: " << add(a, b) << "\n";
        } else if (command == "sub") {
            std::cout << "Result: " << subtract(a, b) << "\n";
        } else if (command == "mul") {
            std::cout << "Result: " << multiply(a, b) << "\n";
        } else if (command == "div") {
            DivisionResult result = divide(static_cast<int>(a), static_cast<int>(b));
            std::cout << "Quotient: " << result.quotient 
                      << ", Remainder: " << result.remainder << "\n";
        } else {
            show_help();
        }
    } else {
        show_help();
    }

    return 0;
}