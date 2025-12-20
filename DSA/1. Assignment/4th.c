#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "CSIPLEARNING";
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] < str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("String in descending order: %s", str);
}