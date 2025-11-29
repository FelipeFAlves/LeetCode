class Solution {
    public int removeElement(int[] nums, int val) {
       int actualNumber;
       int pointer = 0;
       for (int i = 0; i < nums.length; i++){
            actualNumber = nums[i];
            if (actualNumber != val){
                nums[pointer] = actualNumber;
                pointer++;
            } 
        }
        return pointer; 
    }
}