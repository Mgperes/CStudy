#include <stdio.h>

int main() {

    int p = 0;
    int j = 0;
    int m = 0;

    if (p || j || m) {
        printf("O alarme esta ativado\n");
    }
    else {
        printf("O alarme esta desativado\n");
    }

    return 0;
}