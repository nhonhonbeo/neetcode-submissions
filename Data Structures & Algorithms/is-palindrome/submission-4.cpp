class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> palindrome;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(int(s[i]) >= 97 && int(s[i])<=122 || int(s[i]) >= 65 && int(s[i])<=90){
                char c = tolower(s[i]);
                palindrome.push_back(c);
            }
            if(int(s[i]) >= 48 && int(s[i]) <= 57){
                palindrome.push_back(s[i]);
            }
        }
        int l = 0, r = palindrome.size()-1;
        while(l<r){
            if(palindrome[l] != palindrome[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
