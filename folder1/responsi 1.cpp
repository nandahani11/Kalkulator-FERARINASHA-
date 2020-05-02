#include<iostream>
using namespace std;
main(){
	int a,b,c,d,t;
	
	cout<<"KASUS  1"<<endl<<endl;
	cout<<"masukkan waktu 1 (jam)";
	cin>>a;
	cout<<"masukkan waktu 1 (menit)";
	cin>>b;
	cout<<"masukkan waktu 2 (jam)";
	cin>>c;
	cout<<"masukkan waktu 2 (menit)";
	cin>>d;
	cout<<"masukkan jam";
	cin>>t;
	if(t>60){
		a=a+t;	
		cout<<"hasil selisih ="<<a;	
	}
	else{
		cout<<"error";
	}
		
}
