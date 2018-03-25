#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char **argv) {
char out[100] ;
long int numbase10 ;

    if(argc != 4) {
        printf("Digite o argumentos da seguinte forma: ./n2m <num> <baseN> <baseM>\n") ;
        return -1 ;
    }
    numbase10 = bN10(argv[1], atoi(argv[2])) ;
    b10toM(out, numbase10, atoi(argv[3])) ;
    puts(out) ;

    return 0;
}