class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        int n=strs.size();
        for(int i=0;i<n;i++){
            res.append(to_string(strs[i].size()));
            res.push_back('#');
            res.append(strs[i]);
        }
        return res;
    }

    vector<string> decode(string s) {
        int i=0,n=s.size();
        vector<string>res;
        while(i<n){
            int j=i;
            while(s[j]!='#')j++;
            int len=stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return res;
    }
};
