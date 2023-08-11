#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Please Enter Your Obtained Marks: ";
    cin>>marks;
    if (marks >= 95){
        cout<<"Grade : A+";
    }
    else if (marks >= 85){
        cout<<"Grade : A";
    }
   
    else if (marks >= 70){
        cout<<"Grade : B";
    }
    else if (marks >= 50){
        cout<<"Grade : C";
    }
    
    else if (marks >= 33){
        cout<<"Grade : E";
    }
    else if (marks <= 33){
        cout<<"Grade : F";
    }
    else{
        cout<<"Please Enter Your  Marks Beetween 1 to 100 Numbers";
    }
    return 0;
}
