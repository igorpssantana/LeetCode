int pivotIndex(int* nums, int numsSize){

    int aux, count, sumLeft, sumRight;

    for(aux = 0; aux < numsSize; aux++){

        sumLeft = 0;
        sumRight = 0;

        for(count = 0; count < aux; count++){

            sumLeft += nums[count];

        }

        for(count = numsSize-1; count > aux; count--){

            sumRight += nums[count];

        }

        if (sumRight == sumLeft){

            return aux;
        }
    }

    return -1;
}