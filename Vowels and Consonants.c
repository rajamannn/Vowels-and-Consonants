#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0, j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (j = 0; str[j]; j++)
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') ? v++ : c++;

    printf("Vowels: %d\nConsonants: %d\n", v, c);

    return 0;
}
