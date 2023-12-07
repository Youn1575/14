#include <stdio.h>
#include <stdlib.h>

void main(void) {  
	char *pc = NULL;
	int i = 0;
	pc = (char*)malloc(100*sizeof(char)); //한 단위는 character로 100개 받겠다. 
		
	if (pc == NULL) {
		printf("메모리 할당 오류\n");
		exit(1); 
	}
	
	for (i=0;i<26;i++) {
		pc[i] = 'a'+i; //a로부터 몇 번째 뒷글자이냐~  
	}
	
	pc[i] = 0; //맨 마지막에 해당하는  널문자를 넣겠다...
	 
	printf("%s\n", pc);
	free(pc);	//마지막에 반 납 
	
	system("PAUSE");
	return 0;
}

