/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){

    int aux, sum = 0;

    *returnSize = numsSize;

    for (aux = 0; aux < numsSize; aux++){

        sum += nums[aux];

        nums[aux] = sum;

    }

    return nums;
}