#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");

	string txt;
	dest << "-------------------- BOOM ---------------------"<<endl;
	while(getline(source,txt)){
		dest << txt <<endl;
	}
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}