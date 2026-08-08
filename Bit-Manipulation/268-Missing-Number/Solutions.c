int missingNumber(int* nums, int numsSize) {
    int ans = 0;
    for (int i = 1; i < numsSize+1; i++)
        {
        ans = ans ^ i;
        }
    for (int j = 0; j < (numsSize); j++)
        {
        ans = ans ^ nums[j];
        }
    return ans;
}