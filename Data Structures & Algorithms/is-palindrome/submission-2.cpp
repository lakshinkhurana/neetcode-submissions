class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(char c:s){
            if(isalnum(c)){
                newstr+=tolower(c);
            }
        }
        int l=0,r=newstr.length()-1;
        while(l<r){
            if(newstr[l]!=newstr[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
