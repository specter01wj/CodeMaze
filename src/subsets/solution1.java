public class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        subsetsHelper(results, new ArrayList<>(), nums, 0);
        
        return results;
    }
    
    private void subsetsHelper(List<List<Integer>> results, List<Integer> list, int[] nums, int startIndex) {
        results.add(new ArrayList<>(list));
        
        for (int i = startIndex; i < nums.length; ++i) {
            list.add(nums[i]);
            subsetsHelper(results, list, nums, i + 1); // does not really understand why use i + 1
            list.remove(list.size() - 1);
        }
    }
}