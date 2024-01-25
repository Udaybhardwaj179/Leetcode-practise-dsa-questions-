#include <bits/stdc++.h>
void solve(string str,vector<string>&ans, int index, string s) {
	if (index == str.size()){
		if (s!=""){
		ans.push_back(s);
		return;
		}
		return;
	}
	solve(str,ans,index+1, s);
	s=s+str[index];
	solve(str,ans,index+1, s);

}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string s="";
	solve(str,ans,0, s);

	return ans;
	
}
