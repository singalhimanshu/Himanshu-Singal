vector<int> twoSum(vector<int>& nums, int target) {
  // {ele, idx}
  vector<pair<int, int>> arr;
  arr.reserve(nums.size());
  for (int i = 0; i < nums.size(); i++) {
    arr.push_back({nums[i], i});
  }
  sort(arr.begin(), arr.end());
  int left_ptr = 0, right_ptr = arr.size() - 1;
  while (left_ptr < right_ptr) {
    int cur_sum = arr[left_ptr].first + arr[right_ptr].first;
    if (cur_sum == target) {
      return {arr[left_ptr].second, arr[right_ptr].second};
    } else if (cur_sum > target) {
      right_ptr--;
    } else {
      left_ptr++;
    }
  }
  // this condition should never reach
  assert(false);
  return {-1, -1}
}
