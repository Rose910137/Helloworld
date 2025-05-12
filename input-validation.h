// Removed self-include to avoid circular inclusion
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to validate if the input is an integer
int validate_integer(const char *input) {
    for (size_t i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i]) && !(i == 0 && input[i] == '-')) {
            return 0; // Invalid integer
        }
    }
    return 1; // Valid integer
}

// Function to validate if the input is a floating-point number
int validate_float(const char *input) {
    int dot_count = 0;
    for (size_t i = 0; i < strlen(input); i++) {
        if (input[i] == '.') {
            dot_count++;
        } else if (!isdigit(input[i]) && !(i == 0 && input[i] == '-')) {
            return 0; // Invalid float
        }
        if (dot_count > 1) {
            return 0; // More than one dot is invalid
        }
    }
    return 1; // Valid float
}

// Function to validate if the input is alphabetic
int validate_alphabetic(const char *input) {
    for (size_t i = 0; i < strlen(input); i++) {
        if (!isalpha(input[i])) {
            return 0; // Invalid alphabetic string
        }
    }
    return 1; // Valid alphabetic string
}