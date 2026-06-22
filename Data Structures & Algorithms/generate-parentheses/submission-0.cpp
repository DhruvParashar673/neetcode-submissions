class Solution {
public:
vector<string>res;

void solve(int n,int open,int close,string &temp){
    if(temp.size()==2*n){
        res.push_back(temp);
        return;
    }

    if(open<n){
        string b=temp+'(';
         solve(n,open+1,close,b);
    }

    if(close<open){
        string b=temp+')';
        solve(n,open,close+1,b);
    }
}
    vector<string> generateParenthesis(int n) {
  
    string temp="";

    solve(n,0,0,temp);

    return res;

        
    }
};
