class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        string a=s.substr(0,n/2);
        sort(a.begin(),a.end());
        string b=a;
        reverse(b.begin(),b.end());
        if(n%2==0){
        return a+b;}
        else{
           return a+s[n/2]+b;
        }
        

        
    }
};