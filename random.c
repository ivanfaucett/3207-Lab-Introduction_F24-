#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    char ch = 'A';
    return (ch + rand() % 26);
}