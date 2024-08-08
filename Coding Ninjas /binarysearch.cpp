int search(vector<int> &nums, int target) {
    // Write your code here.
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = high+low/2;
        if (nums[mid]==target)
            return mid;
        else if (nums[mid]>target)
            high = mid-1;
        else 
            low = mid+1;  
    }
    return -1;
}
