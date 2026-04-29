#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    int sum = 0;
    for(int i = 0; i < sizeof(a) && sizeof(b); i++){
        sum += a[i] - b[i];
        if(a[i] == '\0' || b[i] == '\0'){
            break;
        }
    }
    return sum;
}
int main() {

    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abd"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
