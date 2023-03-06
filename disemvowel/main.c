#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
    size_t len = strlen(str);
    char* res = calloc(len+1, 1);

    int size = 0;
    for(int i = 0; i < len; i++) {
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                continue;
            default:
                res[size++] = str[i];
        }
    }

	return res;
}

int main() {
    printf("%s\n", disemvowel("Test"));
}