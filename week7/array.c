#include <stdio.h>
#include "array_funcs.h"

#define NUM_STDENTS 5

void print_grades(int grades[]) {
	for (int i = 0; i < NUM_STDENTS; i++) {
		printf("Student %d: %d\n", i + 1, grades[i]);
	}
}

int main(void) {
	int std_grades[NUM_STDENTS] = { 85,92,78,90,88 };

	printf("Initial grades:\n");
	print_grades(std_grades);
	//����ڰ� ���� �ٲٱ�
	int idx1,idx2;
	printf("\nswap two grades (1-%d):\n", NUM_STDENTS);
	scanf_s("%d %d", &idx1, &idx2);

	//0-��� �ε��� ������ �����ϱ�
	idx1--;
	idx2--;

	//�´� �ε��� Ȯ���ϰ� ���� �ٲٱ�
	if (idx1 >= 0 && idx1 < NUM_STDENTS &&
		idx2 >= 0 && idx2 < NUM_STDENTS) {
		swap_grades(std_grades, idx1, idx2);
	}
	else {
		printf("Invailed student numbers!\n");
	}
	

	//���� �����ϱ�
	insertion_short(std_grades, NUM_STDENTS);

	printf("After sorting:\n");
	print_grades(std_grades);


 	return 0;
}