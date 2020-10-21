#include <stdio.h>
#include <stdlib.h>

#include "lib_fp_operation.h"
/*정적, 공적라이브러리 main.c*/
int main() {
	printf("10과 5의 사칙연산\n");
	printf("덧셈 = %d\n", plus(10,5));
	printf("뺄셈 = %d\n", minus(10,5));
	printf("곱셈 = %d\n", multi(10,5));
	printf("나눗셈 = %d\n", divide(10,5));
}


/* 
동적 라이브러리
int main() {
	void *handle;
	int (*plus)(int, int), (*minus)(int, int), 
	    (*multi)(int, int), (*div)(int, int);
	char *error;
	
	handle = dlopen("./lib/libtest.so", RTLD_LAZY);
	if(!handle) {
		fputs(dlerror(),stderr);
		exit(1);
	}

	plus = dlsym(handle, "plus");
	if((error = dlerror()) != NULL) {
		fprintf(stderr,"%s", error);
		exit(1);	
	}
	minus = dlsym(handle, "minus");
	if((error = dlerror()) != NULL) {
		fprintf(stderr,"%s", error);
		exit(1);	
	}
	multi = dlsym(handle, "multi");
	if((error = dlerror()) != NULL) {
		fprintf(stderr,"%s", error);
		exit(1);	
	}
	div = dlsym(handle, "div");
	if((error = dlerror()) != NULL) {
		fprintf(stderr,"%s", error);
		exit(1);	
	}
	
	printf("10과 5의 사칙연산\n");
	printf("덧셈 = %d\n", (*plus)(10,5));
	printf("뺄셈 = %d\n", (*minus)(10,5));
	printf("곱셈 = %d\n", (*multi)(10,5));
	printf("나눗셈 = %d\n", (*div)(10,5));
}
*/
