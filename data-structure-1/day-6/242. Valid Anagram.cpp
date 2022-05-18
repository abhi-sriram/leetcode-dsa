class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ang;
        if(s.length()>t.length()){
            for(int i=0;i<s.length();i++){
                ang[s[i]] += 1;
            }
            for(int i=0;i<t.length();i++){
                if(ang[t[i]]>0){
                    ang[t[i]] -= 1;
                }
            }
        }else{
            for(int i=0;i<t.length();i++){
                ang[t[i]] += 1;
            }
            for(int i=0;i<s.length();i++){
                if(ang[s[i]]>0){
                    ang[s[i]] -= 1;
                }
            }
        }
        for (auto& it: ang) {
            // Do stuff
            if(it.second>0){
                return false;
            }
        }
        return true;
    }
};
