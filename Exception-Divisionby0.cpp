#include <iostream>
using namespace std;
int main(){
    float n1,n2,ans;
    cout<<"Enter No. 1 : ";
    cin>>n1;
    cout<<"Enter No. 2 : ";
    cin>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer is : "<<ans<<endl;
        }
    }
    catch(float num){
        cout<<"\nCannot Divide by 0";
    }
    return 0;
}
/*
Output :
Enter No. 1 : 34
Enter No. 2 : 0
Cannot Divide by 0
*/
