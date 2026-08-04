class Solution {
public:
    string removeDuplicateLetters(string s) {
    stack<char>st;
    unordered_map<char,int>ls;
    unordered_map<char,bool>seen;
     int n=s.size();
     for(int i=0;i<n;i++){
        ls[s[i]]=i;
     }
    for(int i=0;i<n;i++){
        if(seen[s[i]]==true){
            continue;
        }
        while(!st.empty()&& st.top()>s[i] && ls[st.top()]>i){
            seen[st.top()]=false;
              st.pop();
        }     st.push(s[i]);
            seen[s[i]]=true;
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
     
    }
};