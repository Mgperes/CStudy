#include <stdio.h>

int main () {
    int tela = 1920 * 1080;
    int bytes = tela * 3;
    int megabytes = bytes / (1024 * 1024);
    printf("O tamanho da imagem em megabytes : %d MB\n", megabytes);
}