#include "server.h"
void main(void){
char *test;
test=catch_rand();
printf("test %s\n",test);
char *rand=strtok(test,"-");
printf("rand %s\n",rand);
char *tmp=strtok(NULL,"-");
printf("key_seq %s\n",tmp);
}
