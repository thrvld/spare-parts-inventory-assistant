#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 30
#define PART_COUNT 3

char line[LINE_SIZE];
const char MESSAGE_WELCOME[] = "Hello. Welcome to the spare parts inventory!.\n";
const char MESSAGE_NEED[] = "Which part do you need?  ";
const char PARTS_AVAILABLE[][LINE_SIZE] = {"hydraulic pump", "PLC module",
                                           "servo motor"};
char MESSAGE_POSITIVE[] = "I've got a here for you :). Bye!";
char MESSAGE_NEGATIVE[] = "I don't have that in stock.";
// char MESSAGE_STOCK[] = ""

int main(void) {
  printf(MESSAGE_WELCOME) printf(MESSAGE_NEED);
  scanf(PARTS_AVAILABLE, line);
  for (size_t i = 0; i < _Countof PARTS_AVAILABLE; ++i)
    if (strcmp(line, PARTS_AVAILABLE[i]) == 0) {
      puts(MESSAGE_POSITIVE);
      return EXIT_SUCCESS;
    }
  puts(MESSAGE_NEGATIVE);
  return
}