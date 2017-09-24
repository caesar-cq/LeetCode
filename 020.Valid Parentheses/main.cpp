class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;  
          
        for(int i = 0; i < s.length(); i++){  
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') sk.push(s[i]);  
            else{  
                if(sk.empty()) return false;  
                if(s[i] == ')' && sk.top() != '(') return false;  
                else if(s[i] == ']' && sk.top() != '[') return false;  
                else if(s[i] == '}' && sk.top() != '{') return false;  
                sk.pop();  
            }  
        }  
  
        if(sk.empty()) return true;  
        else return false;  
    }
};