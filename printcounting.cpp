#include<iostream>
using namespace std;
void counting(int n){
    //base
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    return counting(n-1);
}
int main(){
    int n;
    cin>>n;
    counting(n);
    
}