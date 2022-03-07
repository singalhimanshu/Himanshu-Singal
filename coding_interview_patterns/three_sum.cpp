vector<vector<int>> threeSum(vector<int>& nums) {
  if (nums.size() < 3) {
    return {};
  }
  vector<vector<int>> res;
  res.reserve(nums.size() / 3);
  sort(nums.begin(), nums.end());
  for (int fp = 0; fp < nums.size() - 2; fp++) {
    int lp = fp + 1, rp = nums.size() - 1;
    while (lp < rp) {
      int cur_sum = nums[fp] + nums[lp] + nums[rp];
      if (cur_sum == 0) {
        res.push_back({nums[fp], nums[lp], nums[rp]});
        lp++;
        rp--;
        // left_ptr duplicate
        while (lp < rp && nums[lp] == nums[lp - 1]) {
          lp++;
        }
        // right_ptr duplicate
        while (lp < rp && nums[rp] == nums[rp + 1]) {
          rp--;
        }
      } else if (cur_sum < 0) {
        lp++;
      } else {
        rp--;
      }
    }
    // remove duplicacy
    while (fp < nums.size() - 2 &&
        nums[fp] == nums[fp + 1]) {
      fp++;
    }
  }
  return res;
}
