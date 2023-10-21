#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i = 0; i < numsSize; i++)
    {
        printf("nums[%i] = %i\n", i, nums[i]);
        
        for(int j = i+1; i < numsSize; i++)
        {
            if((nums[i] + nums[j]) == target) 
                malloc(returnSize[0]) =  nums[i];
                *returnSize[1] =  nums[j];
                break;
        }
    }
    return returnSize;
}

int main(void){
    int nums[4] = {2, 7, 11, 15};
    int size = 0;
    int returnSize[2] = {0};
    returnSize[2] = *twoSum(nums, 4, 9, returnSize);
    for(int i = 0; i < 2; i++){

        printf("Result %i\n", returnSize[i]);
    }

    return 0;

}