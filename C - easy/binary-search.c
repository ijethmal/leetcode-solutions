/*Date of submission: 16 January 2024
Time taken to write: 1 hour 1 minute 12 seconds
Runtime: 20ms, Beats 98.03% of users with C
Memory: 7.64MB,Beats 78.51% of users with C
*/
#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    //time taken: 1h 1min 12 sec

    if (numsSize == 1)
    {
        if (nums[0] == target)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }

    int low = 0;
    int high = numsSize - 1; 
    //put ptr at the mid
    int ptr = numsSize / 2;
    
    while (1)
    {
        if (nums[ptr] == target)
        {
            return ptr;
        }
        else if (low == high)
        {
            return -1;
        }
        else
        {
            if (target < nums[ptr])
            {
                low = low; 
                high = ptr - 1;
                
                /*ptr = high - low;
                ptr = ptr - ptr / 2;*/
                int temp = high-low;
                ptr = low + temp / 2; //problem
                
            }
            else if (target > nums[ptr])
            {
                low = ptr + 1;
                high = high;
                
                int temp = high-low;
                ptr = low + temp / 2; //problem
                
            }
        }
    }
    
    return -1;
}

int main()
{
    int nums[] = {-1,0,3,5,9,12};
    int numsSize = 6;
    int target = 9;
    printf("the index of %d is %d\n", target, search(nums, numsSize, target));
}