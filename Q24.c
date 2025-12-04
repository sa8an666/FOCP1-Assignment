#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';   // convert to uppercase
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';   // convert to lowercase
        }
    }

    printf("%s", s);
    return 0;
}
