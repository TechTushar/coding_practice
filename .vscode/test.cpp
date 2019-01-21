#include<iostream>
#include<thread>
using namespace std;
void sharad(int a){
    cout<<"tushar"<<a;
}
int main()
{
    thread t1(sharad,100);
    t1.join();
    return 0;
}
