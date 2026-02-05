class Solution {
    public int removeDuplicates(int[] nums) {
        int j=0; //keeps track of the last unique number’s position aka index. "unique marker"
        for(int i = 1; i<nums.length;i++){ //i start scan from 2nd element bcs it needs to compare the num to previous element whhich is the 1st element
            if(nums[j] != nums[i]){ //if current nums is diff than previous nums, then new unique nums is found
                j++; //move unique marker forward
                nums [j] = nums [i]; //put new unique nums there
            }
        }
        return j+1; //return the number of unique elements. E.g: last unique index is 2 (0,1,2), the count is 3
    }
}