class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>str1(26,0);
        vector<int>str2(26,0);
        int m=s1.length(),n=s2.length();
        if(m>n)return false;
        int l=0,r=m-1;
        for(int i=0;i<m;i++){
            str1[s1[i]-'a']++;
            str2[s2[i]-'a']++;
        }
        while(r<n){
            if(str1==str2)return true;
            else{
                str2[s2[l]-'a']--;
                l++;
                r++;
                str2[s2[r]-'a']++;
            }
        }
        return false;
    }
};
