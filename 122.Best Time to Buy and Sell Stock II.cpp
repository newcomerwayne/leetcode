//
#include<stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    if ( pricesSize <= 0)
        return 0;
    
    int price = 0;
    int i;
    for ( i = 0; i < pricesSize; i++ )
    {
        if ( prices[i] < prices[i+1] )
        {
            price = price + prices[i+1] - prices[i];
        }
    }
    return price;
}

int main()
{
	int price[ 6 ] = { 7, 1, 5, 3, 6, 4 };
	printf( "%d", maxProfit( price , 6) );
}
