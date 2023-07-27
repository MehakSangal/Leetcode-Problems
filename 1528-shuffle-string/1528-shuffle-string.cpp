class Solution {
public:
    string restoreString(string s, vector<int>& indicies) {
        int n = s.size() ; 
        string temp = s ; 
       for( int i = 0 ; i <n ; i++) 
       {
           s[indicies[i]]= temp[i] ; 
       }

       return s ; 
    }
};