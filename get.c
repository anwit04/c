 #include <stdio.h>
#include <string.h>

int main() {
    const char *numberString = "1234567890";
    const char *searchNumber = "456";

    // Find the substring
    char *pos = strstr(numberString, searchNumber);

    if (pos != NULL) {
        int index = pos - numberString; // Calculate position (0-based)
        printf("The number %s is found at position %d\n", searchNumber, index);
    } else {
        printf("The number %s was not found.\n", searchNumber);
    }

    return 0;
}
