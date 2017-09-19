//
// Created by zhang on 2017/9/19.
//
#include <iostream>

using namespace std;

long init_num(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n*init_num(n-1);
    }
}

void main(){
    int counts,i;
	long sum = 0;
    cout << "请输入偶数！" << endl;
    cin >> counts;
    if(counts % 2 == 0){
        for (i = 2; i <= counts; i=i+2) {
            sum = sum + init_num(i);
        }
		cout << sum << endl;
    }else{
        cout << "输入有误，请输入偶数";
        exit(-1);
    }
}