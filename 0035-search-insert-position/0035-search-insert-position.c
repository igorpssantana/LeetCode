int searchInsert(int* nums, int numsSize, int target){

    int a;
    
    for(a = 0; a < numsSize; a++){

        if(nums[a] >= target)
            return a;
    }

    return a;

}




    