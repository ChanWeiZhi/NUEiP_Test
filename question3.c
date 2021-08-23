/*
�T�B��ƳB�z-�}�C
�{���y��:C
�D�شy�z:�����}�C���0,1,2,3,4,5,6,7,8,9�мg�X��ƳB�z�{���X
1.�p��X�u�_�ƭ��`�M�v��h�u���ƭ��`�M�v
2.���Φ��G�}�C�A���O�s��u���ƭȡv�Ρu�_�ƭȡv
*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void print_array(int array[], int sz) {
	for (int number = 0; number < sz; number++) {
		if (number + 1 != sz) {
			printf("%d, ", array[number]);
		}
		else {
			printf("%d\n", array[number]);
		}
	}
}

int main()
{
	int array[] = {0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(array) / sizeof(int);
	int even_amount = 0;
	int odd_amount = 0;
	int even_sum = 0;
	int odd_sum = 0;

	for (int number = 0; number < sz; number++) {
		if (array[number] % 2 == 0) {
			even_amount++;
			even_sum += array[number];
		}
		else {
			odd_amount++;
			odd_sum += array[number];
		}
	}
	printf("%d\n", odd_sum - even_sum);

	int *even_array;
	even_array = (int*)malloc(even_amount * (sizeof(int)));//�ʺA�ӽаO����
	memset(even_array, 0, even_amount);//��l�ơA�C�Ӥ��������s

	int *odd_array;
	odd_array = (int*)malloc(odd_amount * (sizeof(int)));//�ʺA�ӽаO����
	memset(odd_array, 0, odd_amount);//��l�ơA�C�Ӥ��������s

	int even_number = 0;
	int odd_number = 0;
	for (int number = 0; number < sz; number++) {
		if (array[number] % 2 == 0) {
			even_array[even_number] = array[number];
			even_number++;
		}
		else {
			odd_array[odd_number] = array[number];
			odd_number++;
		}
	}

	print_array(even_array, even_amount);
	print_array(odd_array, odd_amount);

	free(even_array);//����O����
	free(odd_array);//����O����

	return 0;
}