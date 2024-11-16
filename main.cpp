#include<iostream>
#include<cstdlib>
using namespace std;

void casinoGame(int num){
    int random;
    random = rand() % 10;
    cout<<"The number was : "<<random<<endl;
    if(random == num){
        cout<<"YOU HAVE WON THE PRIZE !!!"<<endl;
    } else {
        cout<<"YOU HAVE LOST THE GAME !!!"<<endl;
    }   
}


int main(){
    int num = 0;
    cout<<"-----------------------WELCOME YOU TO THE CASINO NUMBER GUESSING GAME-----------------------"<<endl;
    cout<<"---------------------------YOU WILL GET 1 CHANCE to WIN A PRIZE-----------------------"<<endl;
    cout<<"Choose a number between 1 - 10 : "<<endl;
    cin>>num;
    while(num>10){
        cout<<"Enter a valid number : "<<endl;
        cin>>num;
    }
    casinoGame(num);
    return 0;
}  