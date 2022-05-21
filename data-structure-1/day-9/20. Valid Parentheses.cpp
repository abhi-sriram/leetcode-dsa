class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        int i=0;
        while(i<s.length()){
            
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                
                par.push(s[i]);
                // cout<<par.top()<<endl;
            }else{
                
                if(par.empty()){
                    return false;
                }
                
                if(s[i]==')' && par.top()!='('){
                    return false;
                }else if(s[i]==']' && par.top()!='['){
                    return false;
                }else if(s[i]=='}' && par.top()!='{'){
                    return false;
                }
                par.pop();
                
                
            }
            i++;
        }
        // cout<<par.empty()<<endl;
        if(par.empty()){
            return true;
        }else{
            return false;
        }
    }
};
