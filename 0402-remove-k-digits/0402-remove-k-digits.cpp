class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
       for(char c:num){
        while(!st.empty() && st.top()>c && k>0){
            st.pop();
            k--;
        }
        st.push(c);
        
       }
       while(!st.empty() && k>0){
        st.pop();
        k--;
       }
       string ans="";
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       int i=0;
       int n=ans.size();
       while(i<n && ans[i]=='0'){
        i++;
       }
       return i==n?"0":ans.substr(i,n-i);

    }
};