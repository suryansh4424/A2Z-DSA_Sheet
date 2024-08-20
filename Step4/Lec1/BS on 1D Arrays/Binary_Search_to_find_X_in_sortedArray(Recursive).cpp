int recursion(vector<int> &nums, int low, int high, int target){
    if(low > high){
        return -1;
    }
    int mid = (high+low)/2;
    if(nums[mid] == target){
        return mid;
    }
    else if(target > nums[mid]){
        return recursion(nums, mid+1, high, target);
    }
    return recursion(nums, low, mid-1, target);
}

int search(vector<int> &nums, int target) {
    return recursion(nums, 0, nums.size()-1, target);
}
