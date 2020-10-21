#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 	int row, col;
	
	printf("행렬 크기 입력 (가로x세로) : ");
	scanf("%d %d", &row, &col);
	
	int *matrix1 = malloc(sizeof(int *)*row*col);
	int *matrix2 = malloc(sizeof(int *)*row*col);

	srand(time(NULL));
	for(int i=0; i<10; i++) {
		matrix1[i] = ((rand()%2)+1);
		// 덧샘 값 쉽게 보기위해 0,1만 출력
		matrix2[i] = ((rand()%2)+1);
	}	
	printf("1번 행렬\n");
	for (int i = 0; i < row; i++) {
        	for (int j = 0; j < col; j++) {
            		printf("%d ", matrix1[j-i+5]);    
        	}
        	printf("\n");               
    	}

	printf("2번 행렬\n");
	for (int i = 0; i < row; i++) {
        	for (int j = 0; j < col; j++) {
            		printf("%d ", matrix2[j-i+5]);
			
        	}
        	printf("\n");               
    	}
	printf("두 행렬의 합\n");
	for (int i = 0; i < row; i++) {
        	for (int j = 0; j < col; j++) {
            		printf("%d ", matrix1[j-i+5] + matrix2[j-i+5]);
			
        	}
        	printf("\n");               
    	}
	free(matrix1);
	free(matrix2);
}
