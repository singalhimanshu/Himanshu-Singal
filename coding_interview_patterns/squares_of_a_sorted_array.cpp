vector<int> sortedSquares(vector<int>& nums) {
  vector<int> res(nums.size());
  int left_ptr = 0, right_ptr = nums.size() - 1;
  int move_ptr = res.size() - 1;
  while (left_ptr <= right_ptr) {
    if (abs(nums[left_ptr]) > abs(nums[right_ptr])) {
        res[move_ptr] = nums[left_ptr] * nums[left_ptr];
        left_ptr++;
    } else {
      res[move_ptr] = nums[right_ptr] * nums[right_ptr];
      right_ptr--;
    }
    move_ptr--;
  }
  return res;
}
