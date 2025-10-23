#include <stdio.h>

int main () {
    int link = 100; // velocidade do link em Mbps
    int tempo = 8;  // tempo em segundos
    // Calcula o total de bits transmitidos
    int total_bits = link * tempo;
    printf("Total de bits transmitidos em %d segundos: %d bits\n", tempo, total_bits);
    return 0;
}