# Intuition
The intuition is simple: we need to find two indices i and j such that
nums[i] + nums[j] == target. The straightforward approach is to check
all possible pairs.

# Approach
I used a brute-force method by iterating through all pairs (i, j) with j > i.
For each pair, I check whether nums[i] + nums[j] equals the target. Since the
problem guarantees exactly one valid answer, returning immediately after finding 
the pair is correct.

# Complexity
- Time complexity: O(n^2)
- Space complexity: O(1)


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) { 
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
```
