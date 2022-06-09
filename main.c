#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SHELL_NAME "testShell>"
#define MAX_BUFFER_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	printf("程序地址: %s\n", argv[0]);
	if(argc < 2) {
//		printf("当前没有执行的任务.\n");
	} else {
		printf("First argument is: %s\n", argv[1]);
	}
	while(1) {
		printf(SHELL_NAME);
		//输出shell信息
		char *buf = (char*)malloc(sizeof(char)*MAX_BUFFER_SIZE);
		// 创建最大的缓冲区用以读入 
		fgets(buf,MAX_BUFFER_SIZE,stdin);
		//监听键盘输入
		parse_token(buf);
		//解析命令
		if(feof(stdin)){
			printf("结束啦");
			exit(0);
			dosomeThing();
		}
		
	}
	return 0;
}