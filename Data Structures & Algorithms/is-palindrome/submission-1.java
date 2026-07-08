class Solution {
    public boolean isPalindrome(String s) {

        String new_str = s.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
        int n = new_str.length();
        int l = 0;
        int r = n-1;

        while(l<r)
        {
            if(new_str.charAt(l) != new_str.charAt(r))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
