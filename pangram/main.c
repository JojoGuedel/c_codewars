#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char* str_in) {
    bool tags[26] = {};

    for(int i = 0; str_in[i] != '\0'; i++) {
        if (str_in[i] >= 'A' && str_in[i] <= 'Z') {
            tags[str_in[i]-'A'] = true;
        }
        else if (str_in[i] >= 'a' && str_in[i] <= 'z') {
            tags[str_in[i]-'a'] = true;
        }
    }

    for(int i = 0; i < 26; i++) {
        if (!tags[i]) {
            return false;
        }
    }

    return true;
}


int main() {
    printf("%i", is_pangram("The quick brown fox jumps over the l dog"));
}