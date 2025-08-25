#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int main() {
    char s[1000];
    int k;
    scanf("%s", s);
    scanf("%d", &k);
    int n = strlen(s);
    for (int i = 0; i < n && k > 0; i++) {
        int pos = i;
        for (int j = i + 1; j < n && j - i <= k; j++) {
            if (s[j] < s[pos]) pos = j;
        }
        for (int j = pos; j > i; j--) {
            swap(&s[j], &s[j - 1]);
        }
        k -= (pos - i);
    }
    printf("%s", s);
    return 0;
}
