/*
二、資料處理-字串
程式語言:C
題目描述:請寫出將字串「人易科技:上 機 測 驗 - 演算法」
1.字元「:」改成全型
2.去掉中文字間的空白(保留-號兩側空白)
3.列印出符號:到-之間的字元
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char* s = "人易科技:上 機 測 驗 - 演算法";
    printf("%s\n", s);

    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ':') {
            printf("：");
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
