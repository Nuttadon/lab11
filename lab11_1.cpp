#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int stu = 0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << stu+1 << "]: ";
		cin >> grade; 
		if(grade == 'A'||grade == 'a') {
			count[0]++;
			stu++;
			continue;
		}else if(grade == 'B'||grade == 'b') {
			count[1]++;
			stu++;
			continue;
		}else if(grade == 'C'||grade == 'c'){
			count[2]++;
			stu++;
			continue;
		}else if(grade == 'D'||grade == 'd'){
			count[3]++;
			stu++;
			continue;
		}else if(grade == 'F'||grade == 'f'){
			count[4]++;
			stu++;
			continue;
		}	
		else if(grade == '0'){ 
			break;
		}else{
			cout << "Wrong input. Please input again."<<endl;
			continue;
		}
	}while(true);
	
	cout << "In total " << stu << " students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
