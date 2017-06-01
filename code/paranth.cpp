#include<bits/stdc++.h>

using namespace std;

bool isParanth(char c){
	return ('('==c)||(')'==c);
}

bool isValid(string str){
	int count=0;
	for ( int i=0;i<str.length();i++)
	{
		if(str[i]=='(')
			count++;
		else if(str[i]==')')
			count--;
		if (count<0)
			return false;
	}
	return count==0;
}

void removeInvalidParantheses(string str){
	if(str.empty())
		return;
	set<string> visit;
	queue<string> q;
	string temp;
	bool level;
	q.push(str);
	visit.insert(str);
	while(!q.empty()){
		str=q.front(); q.pop();
		if (isValid(str)){
			cout<<str<<endl;
		}
		level=true;
		if(level)
			continue;
		for (unsigned int i=0;i<str.length();i++){
			if(!isParanth(str[i]))
				continue;
			temp=str.substr(0,i)+str.substr(i+1);
			if(visit.find(temp)==visit.end()){
				q.push(temp);
				visit.insert(temp);
			}

		}
	}
}
 

int main(){
	string exp="())()";
	removeInvalidParantheses(exp);
	return 0;
}

