#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void parse_token(char *token) {
	token=strtok(token,"\n");
	char* param[] = {token,NULL};
//    printf("Executing %s \n", token);
    system("dir");
//    execvp(token, param);
    printf("Executed.\n");
    return;
}