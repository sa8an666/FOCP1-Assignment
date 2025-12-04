#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int z = 0, o = 0;

    // Count Z and O
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'z' || s[i] == 'Z')
            z++;
        else if (s[i] == 'o' || s[i] == 'O')
            o++;
    }

    if (o == 2 * z)
        printf("Yes");
    else
        printf("No");

    return 0;
}
