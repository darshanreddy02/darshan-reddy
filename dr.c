#include <stdio.h>

int main() 
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5, x = 1;
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Found at index %d", mid);
            break;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
	}

    return 0;
}
	
