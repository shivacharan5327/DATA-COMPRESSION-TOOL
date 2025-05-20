#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncode(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count consecutive characters
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Print character and count
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char input[100];

    printf("Enter a string to compress using RunLengthEncode:\n");
    scanf("%s", input);

    printf("Compressed output using RunLengthEncode:\n");
    runLengthEncode(input);

    return 0;
}
