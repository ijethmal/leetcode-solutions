/*Date of submission: 29 January 2024
Runtime: 0ms, Beats 100.00%of users with C
Memory: 5.92MB, Beats 90.76%of users with C
*/
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    
    int high = numsSize-1; //high and low are the indexes
    int low = 0;
    int i = 0; 
    int temp = high - low;
    i = low + temp / 2; //i is at the midpoint
    while (2)
    {
        printf("\n1. i is %d, high is %d and low is %d\n", i, high, low);

        if (nums[i] == target)
        {
            printf("\nposition found!");
            return i;
        }
        else if (nums[i] < target && i != numsSize-1 && target < nums[i+1])
        {
            printf("\nposition found!");
            return i+1;
        }
        else if (target > nums[i])
        {
            if (i == numsSize-1)
            {
                return i+1;
            }
            low = i+1;
            temp = high - low;
            i = low + temp / 2;
            continue;
        }
        else if (target < nums[i])
        {
            if (i == 0)
            {
                return 0;
            }
            high = i-1;
            temp = high - low;
            i = low + temp / 2;
            continue;
        }
    }
    
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7};
    int numsSize = 7;
    //int target = 1;
    printf("\n%d", searchInsert(nums, numsSize, 4)); 
    printf("\n%d", searchInsert(nums, numsSize, 3)); 
    printf("\n%d", searchInsert(nums, numsSize, 1)); 
    printf("\n%d", searchInsert(nums, numsSize, 7)); 
}