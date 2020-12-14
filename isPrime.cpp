/*
// BASIC METHOD
#include <iostream>
#include <cmath>

using namespace std;
int k = 0;//global variable k

int isPrime(int n){
	if (n <= 0)//base cases check
		k = -1;
		
	if (n == 1 || n == 2 || n == 3)//base cases
		k = 1;
		
	else{
		for (int i = 2; i < int(sqrt(n+2)); i++){
				if(n%i == 0){
					k = -1;
					break;
					}
				else {
					k = 1;
					}
			}
		
	}
	return k;
	}

int main(){
	int num;
	cin >> num;//taking input in num
	isPrime(num);//running test function
	if(k == -1)
	cout << "NOT PRIME";
	if(k == 1)
	cout << "IS PRIME";
	return 0;
	}
*/


// Will return all prime number occuring before that number

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void isPrime(int n){
	vector<int> x;
	//0 means FALSE
	//1 means TRUE
	for(int i=0;i < n+1; i++){
		x.push_back(1);
		}
		x[0] = 0;
		x[1] = 0;//making 0 and 1 as non-prime thus 0
	for(int i=0;i*i < n+1; i++){
		if(x[i] == 1){
			for(int j= i*i; j < n+1; j=j+i){
				x[j] = 0;
				}
			}
		}
	for(int i=0; i< n+1; i++){
		cout << i <<" : "<< x[i]<<endl;
		}
}

int main(){
	int num;
	cin >> num;//taking input in num
	isPrime(num );//running test function
	return 0;
	}
