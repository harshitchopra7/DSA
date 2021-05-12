#include <iostream>

using namespace std;

bool palindrome(string &s, int start, int end) {
	if (start >= end)
		return true;
	return (s[start] == s[end]) && palindrome(s, start+1, end-1);
}

int main() {
	string s;
	cin>>s;
	int start = 0;
	int end = s.length()-1;
	if(palindrome(s, start, end)) {
		cout<<"True \n";
	}
	else {
		cout<<"False \n";
	}
	return 0;
}