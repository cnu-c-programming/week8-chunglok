#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
    char *ptr = dst;
    while(*ptr != '\0') {
        ptr++;
    }
    while(*src) {
        *ptr = *src;
        *ptr++;
        *src++;
    }
    return dst;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
