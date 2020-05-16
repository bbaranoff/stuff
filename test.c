#include "client.h"
#include "string.h"
char main (void){
int key_seq=0;
char str[1];
sprintf(str, "%d", key_seq);
char test[]="87 65 43 21 87 65 43 21 87 65 43 21 87 65 43 21";
char *test2;
test2="-";
strcat(test,test2);
strcat(test,str);
client(test);
}
