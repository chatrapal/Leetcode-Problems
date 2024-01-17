int searchInsert(int* nums, int numsSize, int target) {

    int mid = 0;
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        mid = low + ((high - low) / 2);

        if (*(nums + mid) == target) {
            return mid;
        } else if (*(nums + mid) < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    //return -1;
    if(low>(numsSize-1))
    {
        return (numsSize);
    }
   else if(high<0)
    {
      return 0;
    }
    else
    {
        return low;
    }
}
