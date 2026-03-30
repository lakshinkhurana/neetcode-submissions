class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> str1(26,0);
        vector<int> str2(26,0);
        for(int i=0;i<s1.length();i++){
            str1[s1[i]-'a']++;
            str2[s2[i]-'a']++;
        }
        int matches=0;
        for(int i=0;i<26;i++){
            if(str1[i]==str2[i]){
                matches++;
            }
        }
        int l=0;
        for(int r=s1.length();r<s2.length();r++){
            if(matches==26)return true;
            int index=s2[r]-'a';
            str2[index]++;
            if(str1[index]==str2[index]){
                matches++;
            }else if(str1[index]+1==str2[index]){
                matches--;
            }
            index=s2[l]-'a';
            str2[index]--;
            if(str1[index]==str2[index]){
                matches++;
            }else if(str1[index]-1==str2[index]){
                matches--;
            }
            l++;
        }
        return matches==26;
    }
};
