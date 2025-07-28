#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50
#define MAX_PARAGRAPH_LEN 1000


void toLowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    char paragraph[MAX_PARAGRAPH_LEN];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int freq[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a paragraph:\n");

    fgets(paragraph, sizeof(paragraph), stdin);


    size_t len = strlen(paragraph);
    if (len > 0 && paragraph[len - 1] == '\n') {
        paragraph[len - 1] = '\0';
    }


    const char *delimiters = " ,.-!?;:\n\t\"()";
    char *token = strtok(paragraph, delimiters);

    while (token != NULL) {
        toLowercase(token);


        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], token) == 0) {
                freq[i]++;
                found = 1;
                break;
            }
        }


        if (!found) {
            strcpy(words[wordCount], token);
            freq[wordCount] = 1;
            wordCount++;
            if (wordCount >= MAX_WORDS) {
                printf("Reached max words limit.\n");
                break;
            }
        }

        token = strtok(NULL, delimiters);
    }


    printf("\nWord frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i], freq[i]);
    }

    return 0;
}
