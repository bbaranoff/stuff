#include "hex.h"
#include <stdio.h>
const unsigned char * test;
void main(){
test=hex2ascii("31 32 33 34");
printf("ascii%s",test);
}

