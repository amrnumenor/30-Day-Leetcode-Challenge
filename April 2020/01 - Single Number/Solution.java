class Solution {
    public int singleNumber(int[] nums) {
      List<Integer> no_duplicate_list = new ArrayList<>();
  
      for (int i : nums) {
        if (!no_duplicate_list.contains(i)) {
          no_duplicate_list.add(i);
        } else {
          no_duplicate_list.remove(no_duplicate_list.size() - 1);
        }
      }
      return no_duplicate_list.get(0);
    }
  }