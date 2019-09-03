//#include<cstdio>
#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
	int k;
	//scanf("%d", &k);
	//printf("%d \n", k);
	cin >> k;
	cout << "Your number is: " << k << endl;
	string name;
	getline(cin,name);
	getline(cin,name);
	cout<<"Your name is: " << name << endl;
	return 0;
}
