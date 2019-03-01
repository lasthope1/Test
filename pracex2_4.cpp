#include <iostream>
#include <cmath>

using namespace std;

//Write prototype of av() here.
int av(int x, int y)

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

//Write function definition of av() here.
int av(int x, int y){
	int i=x, j=y;
	int max, min;
	if (i<=0 && j<=0){
		cout << 0 << "\n";
	}else if(i>j){
		max = i;
	}else if (j>i){
		max =j;
	}
	}
	
	
}