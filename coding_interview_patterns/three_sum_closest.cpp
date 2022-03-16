int threeSumClosest(vector<int> &nums, int target) {
  assert(nums.size() >= 3);
  sort(nums.begin(), nums.end());
  int res = 0, min_diff = INT_MAX;
  for (int fp = 0; fp < nums.size() - 2; fp++) {
    int lp = fp + 1;
    int rp = nums.size() - 1;
    while (lp < rp) {
      int cur_sum = nums[fp] + nums[lp] + nums[rp];
      int cur_diff = abs(cur_sum - target);
      if (cur_diff < min_diff) {
        min_diff = cur_diff;
        res = cur_sum;
      }
      if (min_diff == 0) {
        return res;
      } else if (cur_sum > target) {
        rp--;
      } else {
        lp++;
      }
    }
  }
  return res;
}
