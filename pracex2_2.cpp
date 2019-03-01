#include <iostream>
#include <fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

void check(float x[], int N){
	for(int i=1; i<N; i++)
		if (x[i-1]==x[i]){
			cout << x[i-1] << "\n"; 
		}
}


int main(){
	
	//Write your code here
	ifstream source("score3.txt");
	string line;
	float score[20]={};
	int num=0;
	for(int i=0; i<20; i++){
		while(getline(source,line)){
				score[i] = atof(line.c_str());
				break;
		}
	}
	sort(score,20);
	for(int j=1; j<=20; j++){
		if(score[j-1]==score[j]){
			cout << score[j-1] << " = " << j << "\n";
			cout << score[j] << " = " << j << "\n";
			j++;
		}else{
			cout << score[j-1]<< " = " << j << "\n";
		}
	
	}
	ofstream dest("out.txt");
	for(int i = 0; i < 20;i++){
		dest << score[i] << "\n";
	}
	dest.close();
	return 0;
}
