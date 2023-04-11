/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int verifier, verifier_aux;
    int *returnPos;

    returnPos = (int*) calloc(2, sizeof(int));

    for(int walker=0; walker < numsSize; walker++){

        for(int walkerAux=0; walkerAux < numsSize; walkerAux++){

            if(nums[walker] + nums[walkerAux] == target && walker != walkerAux){

                returnPos[0] = walker;
                returnPos[1] = walkerAux;
                *returnSize = 2;
                return returnPos;
            }
        }
    }

    *returnSize = 0;
    return returnPos;
}