#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SHELL_NAME "testShell>"
#define MAX_BUFFER_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	printf("�����ַ: %s\n", argv[0]);
	if(argc < 2) {
//		printf("��ǰû��ִ�е�����.\n");
	} else {
		printf("First argument is: %s\n", argv[1]);
	}
	while(1) {
		printf(SHELL_NAME);
		//���shell��Ϣ
		char *buf = (char*)malloc(sizeof(char)*MAX_BUFFER_SIZE);
		// �������Ļ��������Զ��� 
		fgets(buf,MAX_BUFFER_SIZE,stdin);
		//������������
		parse_token(buf);
		//��������
		if(feof(stdin)){
			printf("������");
			exit(0);
			dosomeThing();
		}
		
	}
	return 0;
}