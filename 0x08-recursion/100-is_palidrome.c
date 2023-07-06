#include "main.h"
int is_palindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return 0;
 	}
        left++;
        right--;
    }

    return 1;  
}

int main() {
    char str1[] = "radar";
    printf("%d\n", is_palindrome(str1));  
    char str2[] = "hello";
    printf("%d\n", is_palindrome(str2));  
    char str3[] = "";
    printf("%d\n", is_palindrome(str3));   return 0;
}
