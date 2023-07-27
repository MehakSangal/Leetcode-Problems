class Solution {
public:
    string sortSentence(string s) {
        vector<string> pos(10,""); // Create a pos vector to store the position of the word
        for(int i=0; i<s.size(); i++){
            string temp; // Create a temp string to store the word
            while(!isdigit(s[i])) // If s[i] is not digit then add s[i] to word
                temp += s[i++]; 
            pos[s[i++]-'0'] = temp; // When digit occurs, add its position
        }
        string ans;
        for(int i=1; i<10; i++){
            if(pos[i].length()>0)
                ans += pos[i] + ' ';
        }
        ans.pop_back();
        return ans;
    }
};