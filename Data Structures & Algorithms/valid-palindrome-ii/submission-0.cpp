class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return isPali(s.substr(0,l)+s.substr(l+1)) || isPali(s.substr(0,r)+s.substr(r+1));
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool isPali(string s){
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r])return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};