#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
	srand (time(0));
	int E1= rand()%20+1;
	int E2= rand()%20+1;
	if (E1==E2){
		while (E1==E2){
			int E1=rand()%8+1;
		}		
	}
	cout<<"Primer ejercicio: "<<E1<<endl;
	cout<<"Segundo ejercicio: "<<E2<<endl;
}
