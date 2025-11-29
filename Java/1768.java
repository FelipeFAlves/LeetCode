class Solution {
    public String mergeAlternately(String word1, String word2) {
        int min = Math.min(word1.length(), word2.length());
        StringBuilder finalWord = new StringBuilder();
        int i = 0;
        while (i < min) {
            finalWord.append(word1.charAt(i));
            finalWord.append(word2.charAt(i));
            i++;
        }
        if (word1.length() > i) finalWord.append(word1.substring(i));
        if (word2.length() > i) finalWord.append(word2.substring(i));
        return finalWord.toString();
    }
}