/*
���B����`�M
�{���y��:C
�D�شy�z:
1.���w�@�Ӿ�ư}�Cnums�M�@�Ӿ�ư}�Ctarget�A�����`�M��target�ɡA��^��ƪ����ޡC
2.�z�i�H���]�C�ӿ�J���u���@�ӸѨM��סA�åB�z�i�ण�|�⦸�ϥάۦP�������C
3.�z�i�H�����󶶧Ǫ�^���סC
4.�������:
	�C2 <= num.lenght <= 103
	�C-109 <= nums[i] <= 109
	�C-109 <= target <= 109
	�C�Ȧs�b�@�Ӧ��ĵ���
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