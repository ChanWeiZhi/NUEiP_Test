/*
�G�B��ƳB�z-�r��
�{���y��:C
�D�شy�z:�мg�X�N�r��u�H�����:�W �� �� �� - �t��k�v
1.�r���u:�v�令����
2.�h������r�����ť�(�O�d-���ⰼ�ť�)
3.�C�L�X�Ÿ�:��-�������r��
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char* s = "�H�����:�W �� �� �� - �t��k";
    printf("%s\n", s);

    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ':') {
            printf("�G");
        }
        else {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ' && s[i + 1] != '-' && s[i - 1] != '-') {
            continue;
        }
        else {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    int print_switch = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ':') {
            print_switch = 1;
        }
        if (s[i] == '-') {
            printf("%c", s[i]);
            print_switch = 0;
        }
        if (print_switch == 1) {
            printf("%c", s[i]);
        }
    }

    return 0;
}
