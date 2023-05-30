#include <stdio.h>

int main() {
    int i = 0x12345678;
    char *p = (char*)&i;

    if(*p == 0x12) {
        printf("big-endian");
    }
    else {
        printf("little-endian");
    }
    return 0;
}
