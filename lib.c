#include <stdio.h>

#include "lib.h"
char *alfb = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" ;
char *p ;

long int outnum = 0;
long int exp = 1;
long int index;
int istr = 0;

long int i_alfb(char c) {

    if((p=strchr(alfb, c))) {
        return (long int)(p - alfb);
    } else {
        return (long int)NULL ;
    }
}
long int bN10(char *strnum, int basen) {
 

    index = strlen(strnum) - 1;

    if(index <= 0) return -1 ;

    while(index >= 0) {
        outnum += i_alfb(strnum[index])*exp;
        index-- ; exp = exp * basen ;
    }

    return outnum ;
}
void b10toM(char *str, long int inpnum, int basem) {
    int istr = 0;

   
    if(inpnum == 0) {
        str[0]='0'; istr=1;
    }

    while(inpnum) {
        str[istr++]=alfb[inpnum%basem];
        inpnum /= basem;
    }
    str[istr]=0 ;

    if(istr>0) {
        char t ;
        long int i=0 ;

        istr-- ;
        while(i <= istr/2) {
            t = str[istr-i] ;
            str[istr-i] = str[i];
            str[i++] = t;
        }
    }
}
