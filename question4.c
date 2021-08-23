/*
四、資料排序-正序
程式語言:C
題目描述:今有一陣列資料77,5,5,22,13,55,97,4,796,1,0,9請寫出正序排列處理程式碼
*/
#include <stdio.h>

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
	int array[] = {77,5,5,22,13,55,97,4,796,1,0,9};
    int sz = sizeof(array) / sizeof(int);

    print_array(array, sz);

    for (int i = 0; i < sz; ++i) {
        for (int j = 0; j < i; ++j) {
            if (array[j] > array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    print_array(array, sz);

	return 0;
}
