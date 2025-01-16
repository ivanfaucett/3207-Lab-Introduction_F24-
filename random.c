#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    char ch = 'a';
    return (ch + rand() % 26);
}