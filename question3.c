/*
三、資料處理-陣列
程式語言:C
題目描述:今有陣列資料0,1,2,3,4,5,6,7,8,9請寫出資料處理程式碼
1.計算出「奇數值總和」減去「偶數值總和」
2.分割成二陣列，分別存放「偶數值」及「奇數值」
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
	even_array = (int*)malloc(even_amount * (sizeof(int)));//動態申請記憶體
	memset(even_array, 0, even_amount);//初始化，每個元素都為零

	int *odd_array;
	odd_array = (int*)malloc(odd_amount * (sizeof(int)));//動態申請記憶體
	memset(odd_array, 0, odd_amount);//初始化，每個元素都為零

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

	free(even_array);//釋放記憶體
	free(odd_array);//釋放記憶體

	return 0;
}