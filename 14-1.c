#include <stdio.h>
#include <stdlib.h>

void main(void) {  
	char *pc = NULL;
	int i = 0;
	pc = (char*)malloc(100*sizeof(char)); //�� ������ character�� 100�� �ްڴ�. 
		
	if (pc == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1); 
	}
	
	for (i=0;i<26;i++) {
		pc[i] = 'a'+i; //a�κ��� �� ��° �ޱ����̳�~  
	}
	
	pc[i] = 0; //�� �������� �ش��ϴ�  �ι��ڸ� �ְڴ�...
	 
	printf("%s\n", pc);
	free(pc);	//�������� �� �� 
	
	system("PAUSE");
	return 0;
}

