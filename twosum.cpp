/*
����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�
ʾ��
���� nums = [2, 7, 11, 15], target = 9
��Ϊ nums[0] + nums[1] = 2 + 7 = 9
���Է��� [0, 1]*/
#include<stdio.h>
#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target) {
	int i, j, temp;
	int *result = (int *)malloc(sizeof(int) * 2);
	for (i = 0; i < numsSize; i++)
	{
		temp = nums[i];
		for (j = i + 1; j < numsSize; j++)
		{
			if (target - temp == nums[j])
			{
				result[0] = i;
				result[1] = j;
				return result;
			}
		}

	}
	return 0;
}