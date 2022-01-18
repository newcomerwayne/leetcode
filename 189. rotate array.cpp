//rotate array
#include<stdio.h>

void rotate(int* nums, int numsSize, int k)
{
    int nums1[numsSize];
    int i = 0;
    for ( i = 0 ; i < numsSize; i++ )
    {
        nums1[ ( i + k) % numsSize ] = nums[ i ];
    }
    for ( int i = 0; i < numsSize; i++ )
        nums[ i ] = nums1[ i ];
}
int main()
{
	int nums[ 4 ] = { 1, 2, 3, 4 };
	int i;
	rotate( nums, 4, 2 );
	for ( i = 0; i < 4; i++ )
		printf( "%d", nums[ i ]);
	return 0;
}
