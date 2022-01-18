//leetcode single number

int singlenumbers(int* nums, int numssize)
{
	
	for(i = 0; i < numssize; i++)
		{
		printf("%d\n",nums[i]);
	
		int count = 0;
	
		for(int j=0; j < numssize; j++)
		{
			if(num[j] == num[i])
			{
				count++;
			}
		if(count == 1)
			{
				return nums[i];
			}
		}
	}
	return -1;
}

