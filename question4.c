/*
�|�B��ƱƧ�-����
�{���y��:C
�D�شy�z:�����@�}�C���77,5,5,22,13,55,97,4,796,1,0,9�мg�X���ǱƦC�B�z�{���X
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
