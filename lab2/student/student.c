#include <stdio.h>
#include <stdlib.h>


typedef struct _node* tree;
typedef struct _node node;

struct _node{
	int a;
	char student[10];
	int midterm;
	int endterm;
};

tree InputIntf(tree dynamicheap, int number) {
	int i = 0;
	dynamicheap = (tree)malloc(number * sizeof(node));
	if(!dynamicheap) { exit(1); }

	for(i=0; i<number; i++) {
		printf("%d번째 학생 \n", i+1);
		printf("중간고사 점수 : ");
		scanf("%d", &dynamicheap[i].midterm);
		printf("기말고사 점수 : ");
		scanf("%d", &dynamicheap[i].endterm);
		printf("성명 : ");
		scanf("%s", dynamicheap[i].student);

		dynamicheap[i].a = 1+i;
		printf("\n");
	}
	return dynamicheap;	
}

void showTree(tree t, int index, int number) {
	if(index == number) { return; }
	else {
		printf("%d번쨰 학생 \n" , t[index].a);
		printf("성명 : %s\n", t[index].student);
		printf("중간고사 점수 : %d\n", t[index].midterm);
		printf("기말고사 점수 : %d\n", t[index].endterm);
		showTree(t, index+1, number);
	}
}



void main() {
	int number = 0;
	tree dynamicheap = 0;

	printf("학생 수 입력 : ");
	scanf("%d", &number);
	dynamicheap = InputIntf(dynamicheap, number);
	showTree(dynamicheap, 0, number);
	free(dynamicheap);
}
