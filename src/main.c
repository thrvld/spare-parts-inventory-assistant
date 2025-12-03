#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define LINE_SIZE 40
#define PART_COUNT 3
#define count_of(arr) (sizeof(arr) / sizeof((arr)[0]))

char INPUT[LINE_SIZE];
const char PARTS[PART_COUNT][LINE_SIZE] = { "hydraulic pump", 
                                            "PLC module", 
                                            "servo motor" };
const char MESSAGE_WELCOME[] = "Welcome to the spare parts inventory!\n"
                               "Which part are you looking for?\n";
const char MESSAGE_ENTER[] = "Enter desired part:    ";
const char MESSAGE_POSITIVE[] = "Here is the part you asked for :)\nBye!\n";
const char MESSAGE_NEGATIVE[] = "Sorry - I don't have that in stock.\n"
                                "What else would you like me to look for?\n";

int main(void) {
    printf("%s%s", MESSAGE_WELCOME, MESSAGE_ENTER);

    int found = false;

    while (!found) {
        if (fgets(INPUT, count_of(INPUT), stdin)) {
            INPUT[strcspn(INPUT, "\n")] = 0;
        }

        int i = false;

        while (i < PART_COUNT && strcmp(INPUT, PARTS[i]) != 0) {
            i++;
        }

        if (i < PART_COUNT) {
            found = true;

        } else {
            printf("%s%s", MESSAGE_NEGATIVE, MESSAGE_ENTER);
        }
    }
    printf("%s", MESSAGE_POSITIVE);
}