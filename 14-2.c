#include <stdio.h>
#include <stdlib.h>

	struct Book {
	int number;
	char title[10];
	};
	
void main(void) {
	struct Book *p;
	
	p = (struct Book*)malloc(2 * sizeof(struct Book)); //2개의 구조체 * 위에서 정의한 구조체의 크기= 2개를 만들어라 
	if (p == NULL) {
	printf("메모리 할당 오류\n/");
	return;
}
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;	
	strcpy((p+1)->title, "Electronics");
	
	free(p);
	
	return;
}

