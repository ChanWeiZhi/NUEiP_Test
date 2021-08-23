/*
六、兩數總和
程式語言:C
題目描述:
1.給定一個整數陣列nums和一個整數陣列target，當兩數總和為target時，返回兩數的索引。
2.您可以假設每個輸入都只有一個解決方案，並且您可能不會兩次使用相同的元素。
3.您可以按任何順序返回答案。
4.限制條件:
	。2 <= num.lenght <= 103
	。-109 <= nums[i] <= 109
	。-109 <= target <= 109
	。僅存在一個有效答案
*/

#include <stdio.h>

void TwoSum(int nums[], int nums_sz, int target, int answer[]) {
	for (int i = 0; i < nums_sz; i++)
	{
		for (int j = i + 1; j < nums_sz; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				answer[0] = i;
				answer[1] = j;
			}
		}
	}
}

int main()
{
	int nums[] = {2,7,11,15};
	int target = 9;
	int answer[2];
	int num_sz = sizeof(nums) / sizeof(int);

	TwoSum(nums, num_sz, target, answer);
	printf("%d %d", answer[0], answer[1]);

	return 0;
}