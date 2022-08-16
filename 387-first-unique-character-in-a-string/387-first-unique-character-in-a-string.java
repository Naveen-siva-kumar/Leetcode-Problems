class Solution {
    public int firstUniqChar(String s) {
        
        int frequenyList[] =new int[26];
        
        
        for(int  i=0;i<s.length();i++){
            
            int index = s.charAt(i)-'a';
            
            frequenyList[index]++;
        }

        for (int i = 0; i < s.length(); i++) {
            
            int index = s.charAt(i) - 'a';
            
            if (frequenyList[index] == 1) {
                return i;
            }
            
                
        }
        return -1;
    }
}