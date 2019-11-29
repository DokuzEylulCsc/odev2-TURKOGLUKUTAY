#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int x;
  cout << "1 ile 3999 arasinda onluk taban gosteriminde bir sayi giriniz: ";
  cin >> x; 
 if (x < 4000&&x>0){
 		int a;
 		a=x/1000;
 		while(a>0){
		 cout<<"M";
		 a=a-1;}
 		int b;
 		b=(x%1000)/100;
 		if(b==9){
 			cout<<"CM";}
 		if(b>=5&&b!=9){
 			int c;
 			c=b-5;
 			cout<<"D";
			while(c>0){
				cout<<"C";
				c=c-1;}}
		if(b==4){
			cout<<"CD";}
		if(b<4){
			while(b>0){
				cout<<"C";
				b=b-1;}}			
		int d;
		d=((x%100)/10);
		if(d==9){
			cout<<"XC";}
		if(d==5){
			cout<<"L";}
		if(d>5&&d!=9){
			cout<<"L";
			while(d>=6){
				cout<<"X";
				d=d-1;}}
		if(d==4){
			cout<<"XL";}
		if(d<4){
			while(d>0){
				cout<<"X";
				d=d-1;}}
		int e;
		e=x%10;
		if(e==9){
			cout<<"IX";	}
		if(e==5){
			cout<<"V";}
		if(e==4){
			cout<<"IV";}
		if(e>5&&e!=9){
			cout<<"V";
			while(e>5){
				cout<<"I";
				e=e-1;}}
		if(e<5&&e!=4){
			while(e>0){
				cout<<"I";
				e=e-1;}}}
		cout<<" "<<endl;
	string sym[] = { "I", "i","V", "v", "X", "x", "L", "l", "C", "c", "D", "d", "M", "m" };
	int num[] = { 1,1,5,5,10,10,50,50,100,100,500,500,1000,1000 };
	string inp;
	cout << "1 ile 3999 arasinda roma rakamlari gosteriminde bir sayi  giriniz: ";
	cin >> inp;	
	vector< int > arr;
	for (int i = 0; i < inp.length(); i++) {
		string k = "";
		k = k + inp[i];
		for (int j = 0; j < 14; j++) {
			if (k == sym[j]) {
				arr.push_back(num[j]);
				break;}}}
	int total = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (i == arr.size()-1) {
			total += arr[i];
			break;}
		if (arr[i] < arr[i + 1]) total -= arr[i];
		else total += arr[i];}
	cout << total;
		return 0;}
		
	
