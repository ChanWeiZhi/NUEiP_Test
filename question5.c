/*
���B�޿�B�z-�涰�B�t���B�p��
�{���y��:C
�D�شy�z:�����G�}�C�A�мg�X��ƳB�z�{���X
�}�Ca:77,5,5,22,13,55,97,4,796,1,0,9
�}�Cb:0,1,2,3,4,5,6,7,8,9
1.�}�Cc = �}�Ca �涰 �}�Cb
2.�}�Cd = �}�Ca �t�� �}�Cb
3.�}�Ce = �}�Ca �p�� �}�Cb
*/

#include <stdio.h>

void BubbleSort(int array[], int sz)
{
    for (int i = 0; i < sz; ++i) {
        for (int j = 0; j < i; ++j) {
            if (array[j] > array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int RemoveDuplicates(int array[], int sz)
{
    if (sz == 0) return 0;
    int new_sz = 1;
    for (int i = 1; i < sz; i++)
    {
        if (array[i] == array[i - 1]) continue;
        array[new_sz++] = array[i];
    }
    return new_sz;
}

int main()
{
    int a[] = { 77,5,5,22,13,55,97,4,796,1,0,9 };
    int b[] = { 0,1,2,3,4,5,6,7,8,9 };
    int a_sz = sizeof(a) / sizeof(int);
    int b_sz = sizeof(b) / sizeof(int);

    BubbleSort(a, a_sz);
    BubbleSort(b, b_sz);
    int rd_a_sz = RemoveDuplicates(a, a_sz);
    int rd_b_sz = RemoveDuplicates(b, b_sz);

    //�}�Cc = �}�Ca �涰 �}�Cb
    int c_sz = 0;
    int x, y;
    for (x = 0; x < rd_a_sz; x++) {
        for (y = 0; y < rd_b_sz; y++) {
            if (a[x] == b[y]) {
                c_sz++;
            }
        }
    }

    int* c = (int*)malloc(c_sz * (sizeof(int)));//�ʺA�ӽаO����
    memset(c, 0, c_sz);//��l�ơA�C�Ӥ��������s

    int c_number = 0;
    for (x = 0; x < rd_a_sz; x++) {
        for (y = 0; y < rd_b_sz; y++) {
            if (a[x] == b[y]) {
                c[c_number] = a[x];
                printf("%d ", c[c_number]);
                c_number++;
            }
        }
    }
    printf("\n");

    //�}�Cd = �}�Ca �t�� �}�Cb
    int d_sz = rd_a_sz - c_sz;
    int* d = (int*)malloc(d_sz * (sizeof(int)));//�ʺA�ӽаO����
    memset(d, 0, d_sz);//��l�ơA�C�Ӥ��������s
    
    int d_number = 0;
    for (x = 0; x < rd_a_sz; x++) {
        for (y = 0; y < c_sz; y++) {
            if (a[x] == c[y]) {
                break;
            }
            if(y == c_sz-1)
            {
                d[d_number] = a[x];
                printf("%d ", d[d_number]);
                d_number++;
            }
        }
    }
    printf("\n");
    
    //�}�Ce = �}�Ca �p�� �}�Cb
    int e_sz = rd_a_sz + rd_b_sz;
    int* e = (int*)malloc(e_sz * (sizeof(int)));//�ʺA�ӽаO����
    memset(e, 0, e_sz);//��l�ơA�C�Ӥ��������s

    int e_number = 0;
    for (x = 0; x < rd_a_sz; x++) {
        e[e_number] = a[x];
        e_number++;
    }
    for (y = 0; y < rd_b_sz; y++) {
        e[e_number] = b[y];
        e_number++;
    }

    BubbleSort(e, e_sz);
    int rd_e_sz = RemoveDuplicates(e, e_sz);
    for (x = 0; x < rd_e_sz; x++) {
        printf("%d ", e[x]);
    }

    free(c);//����O����
    free(d);//����O����
    free(e);//����O����

	return 0;
}