class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0; // current start point of substring without dup  
        int maxlen = 0; // max length of substring found  
        int table[256]; // hash table for index of each char appeared  
        for (int i = 0;i < 256;i++) table[i] = -1; // if char not present, index is -1  
        int len = s.length();  
        for (int i = 0;i < len;i++) {  
            if (table[s[i]] != -1) {  
                while (start <= table[s[i]]) table[s[start++]] = -1;  
            }  
            if (i - start + 1 > maxlen) maxlen = i - start + 1;  
            table[s[i]] = i;  
        }  
        return maxlen;  
    }  
};
