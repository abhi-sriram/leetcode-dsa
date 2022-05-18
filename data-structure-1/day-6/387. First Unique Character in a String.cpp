class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> unq;
        for(int i=0;i<s.length();i++){
            if(unq.find(s[i])!=unq.end()){
                unq[s[i]] += 1;
            }else{
                unq[s[i]] = 1;
            }
        }
        for(int i=0;i<s.length();i++){
            if(unq[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
