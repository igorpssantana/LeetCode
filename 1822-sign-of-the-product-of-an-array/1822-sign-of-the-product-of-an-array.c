int arraySign(int* nums, int numsSize){

    int product = nums[0];

    for(int walker = 1; walker < numsSize; walker++){

        product *= nums[walker];
        product = product != 0 ? product > 0 ? 1 : -1 : 0;
    }

    return product != 0 ? product > 0 ? 1 : -1 : 0;
}