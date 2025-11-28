class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int finalPointer  = m + n -1;
        while (n > 0 && m > 0) {
            if (nums1[m-1] < nums2[n-1]) {
                nums1[finalPointer] = nums2[n-1];
                n--;   
                finalPointer--;
            } else {
                nums1[finalPointer] = nums1[m-1];
                m--;
                finalPointer--;
            }
        }
        while (n > 0) {
            nums1[finalPointer] = nums2[n-1];
            finalPointer--;
            n--;
        }
        while (m > 0) {
            nums1[finalPointer] = nums1[m-1];
            finalPointer--;
            m--;
        } 
        // for (int i = 0; i < nums1.length; i++){
        //     System.out.println(nums1[i]);
        // } 
    }
}