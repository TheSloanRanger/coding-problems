int getIndexOfNum(int num, int* nums, int size) {
    for (int x = 0; x < size; x++) {
        if (nums[x] == num) {
            return x;
        }
    }

    // return -1 if not found
    return -1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *answer = (int *)malloc(sizeof(int) * 2);
    for (int x = 0; x < numsSize; x++) {
        int secondaryTarget = target - nums[x];
        printf("Secondary Target: %d\n", secondaryTarget);
        int indexOfSecondaryNum = getIndexOfNum(secondaryTarget, nums, numsSize);
        if (indexOfSecondaryNum != -1 && indexOfSecondaryNum != x) {
            printf("Found an index");
            answer[0] = x;
            answer[1] = indexOfSecondaryNum;
            *returnSize = 2;
            return answer;

        } 
    }  
    return NULL;
}

