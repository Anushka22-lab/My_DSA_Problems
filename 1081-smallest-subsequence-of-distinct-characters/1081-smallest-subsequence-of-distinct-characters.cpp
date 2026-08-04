class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        vector<int>ls(26);
        vector<bool>seen(26,false);
        int n=s.size();
        for(int i=0;i<n;i++){
            ls[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a']==true){
                continue;//already seen skip it
            }
            while(!st.empty()&& st.top()>s[i]&& ls[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();//stack bhara hua h && top >curr ch && top appears later
                
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
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