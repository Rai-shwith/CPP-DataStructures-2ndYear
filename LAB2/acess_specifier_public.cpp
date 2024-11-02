#include<iostream>
#include<conio.h> // Not in C++11 and later

using namespace std;

class Disp{
public:
	int x;
	void display(){
		cout<<"x = "<<x<<endl;
	}
};

int main(){
	Disp obj1;
	obj1.x = 5;
	obj1.display();
	getch(); // Not in C++11 and later
	return 0;
}

/*
OUTPUT:
x = 5
*/