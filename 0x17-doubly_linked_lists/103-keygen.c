#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_key(char *username) {
    int key_length = strlen(username) + 5;
    char *key = (char *)malloc(key_length);

    snprintf(key, key_length, "%s%d", username, 42);

    printf("%s\n", key);

    free(key);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return EXIT_FAILURE;
    }

    generate_key(argv[1]);

    return EXIT_SUCCESS;
}
