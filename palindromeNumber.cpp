#include <iostream>
#include <math.h>

using namespace std;

bool palindromeNumber(int n) {
	int reverse = 0;
	int digit = 0;
	int temp = n;
	while(temp > 0) {
		reverse = reverse * 10;
		digit = temp % 10;
		reverse = reverse + digit;
		temp = temp / 10;
	}
	if (reverse == n) {
		return true;
	}
	return false;

}

int main() {
	int n;
	cin>>n;
	if(palindromeNumber(n)) {
		cout<<n<<" is a palindrome \n";
	}
	else {
		cout<<n<<" is not a palindrome \n";
	}
	return 0;
}