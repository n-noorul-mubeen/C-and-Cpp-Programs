#include <stdio.h>
#include <string.h>

char* sort(char* arr) {
    int len = strlen(arr);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                char temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}

int main() {
    char str1[64];
    char str2[64];
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%s\n", sort(str1));
    printf("%s\n", sort(str2));

    if (strcmp(sort(str1), sort(str2)) == 0) {
        printf("Anagrams\n");
    } else {
        printf("Not Anagrams\n");
    }
    return 0;
}
