bool backspaceCompare(string s, string t) {
  int s_ptr = s.size() - 1, t_ptr = t.size() - 1;
  int bsp_cnt_s = 0, bsp_cnt_t = 0;
  while (s_ptr >= 0 || t_ptr >= 0) {
    // deleting character on '#'
    while (s_ptr >= 0 && (s[s_ptr] == '#' || bsp_cnt_s > 0)) {
      if (s[s_ptr] == '#') {
        bsp_cnt_s++;
      } else {
        bsp_cnt_s--;
      }
      s_ptr--;
    }
    // deleting character on '#'
    while (t_ptr >= 0 && (t[t_ptr] == '#' || bsp_cnt_t > 0)) {
      if (t[t_ptr] == '#') {
        bsp_cnt_t++;
      } else {
        bsp_cnt_t--;
      }
      t_ptr--;
    }

    if (s_ptr >= 0 && t_ptr >= 0 && (s[s_ptr] == t[t_ptr])) {
      s_ptr--;
      t_ptr--;
    } else {
      return s_ptr == -1 && t_ptr == -1;
    }
  }
  return true;
}
