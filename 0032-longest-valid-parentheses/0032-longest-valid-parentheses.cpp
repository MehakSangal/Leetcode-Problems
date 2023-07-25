class Solution {
public:
    int longestValidParentheses(string s) {
        
        int ans=0;
        int t=0;
        stack<int> st;
      
        st.push(-1);
        
        for(auto i:s)
        {
            if(i=='(') {
                st.push(t);
                
            }
            else{
                if(!st.empty() && st.top()!=-1 && s[st.top()]=='(')
                {
                    st.pop();
                   
                    ans=max(ans,abs(t-st.top()));
                    
                }
                else st.push(t);
            }
            t++;
        }
        return ans;
    }
};