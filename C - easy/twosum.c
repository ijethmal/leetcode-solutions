#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    *returnSize = 2; //only return two elements

    //nums is the array to iterate through

    int* numbers=(int*)malloc(2*(sizeof(int)));

    for(int i=0; i<numsSize; i++){

    for (int j=i+1; j<numsSize; j++){
        if (nums[i]+nums[j]==target){
            numbers[0]=i;
            numbers[1]=j;
        }
    }
    }
    return numbers;
    }

int main() {
    printf(twoSum([3,9,6], 3, 12, 2));
};