#include "server.h"
void main(void){
char *test;
test=catch_rand();
printf("test %s",test);
char *rand=strtok(test,"-");
printf("rand %s",rand);
}
