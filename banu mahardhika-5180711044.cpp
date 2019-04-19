#include <iostream>

using namespace::std;

int Mdls(int nilai,int n){

    if(n==0){
        return (nilai%n);
    }
    else if(n==nilai){
        return (0);
    }
    else{
        return (nilai%n);
    }
}

main(){
    int nil,mod;
cout<<" Masukan Bilangan  : ";
cin>>nil;
cout<<" Masukan Modulus   : ";
cin>>mod;
cout<<" Hasilnya "<<nil<<" % "<<mod<<" = "<<Mdls(nil,mod);
}


