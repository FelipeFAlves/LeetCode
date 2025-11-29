class Solution {
    public boolean isPalindrome(String s) {
        int ponteiroInicio = 0, ponteiroFim = s.length() - 1;

        while (ponteiroInicio < ponteiroFim) {

            while (ponteiroInicio < ponteiroFim && !Character.isLetterOrDigit(s.charAt(ponteiroInicio))) {
                ponteiroInicio++;
            }
            while (ponteiroInicio < ponteiroFim && !Character.isLetterOrDigit(s.charAt(ponteiroFim))) {
                ponteiroFim--;
            }
            if (Character.toLowerCase(s.charAt(ponteiroInicio)) != Character.toLowerCase(s.charAt(ponteiroFim))) {
                return false;
            }
            ponteiroInicio++;
            ponteiroFim--;
        }

        return true;
    }
}
