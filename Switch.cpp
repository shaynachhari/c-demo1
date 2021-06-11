#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter any months numers "<<endl;
    cin>>m;

    switch (m)
    {case 1:
    cout<<"Juary"<<endl;
    break;
    
    case 2:
    cout<<"Ferbry"<<endl;
    break;

    case 3:
    cout<<"March"<<endl;
    break;

    case 4:
    cout<<"Apirl"<<endl;
    break;

    case 5:
    cout<<"May"<<endl;
    break;

    case 6:
    cout<<"june"<<endl;
    break;

    case 7:
    cout<<"July"<<endl;
    break;

    case 8:
    cout<<"Agust"<<endl;
    break;

    case 9:
    cout<<"Simtbers"<<endl;
    break;

    case 10:
    cout<<"October"<<endl;
    break;

    case 11:
    cout<<"Novmber"<<endl;
    break;

    case 12:
    cout<<"December"<<endl;
    break;

    default:
    cout<<"Invaild Months number"<<endl;
    break;
    return 0;
}
}