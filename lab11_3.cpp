#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    ifstream score("score.txt");
    string box;
    float mean,sum=0,rpwsum=0,sd;
    int n=0;
    while(getline(score,box)){
        sum += stod(box);
        rpwsum += stod(box)*stod(box);
            n++;
    }
    mean = sum/n;
    sd = sqrt((rpwsum/n)-(mean*mean));

cout << "Number of data = "<<n<<endl;
cout << setprecision(n%10); 
cout << "Mean = "<<mean<<endl;
cout << "Standard deviation = "<<sd;
}
