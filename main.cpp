#include<iostream>
using namespace std;

int main(){
    //variable requirment
    string startvalue;
    string choiceagain;
    float onlineshopping(void);
    startagain:
    cout<<"Please say yes to start shopping"<<endl;
    start:
    cin>>startvalue;
    if(startvalue=="YES" || startvalue=="Yes" || startvalue=="yes"){
      float totalamount=onlineshopping();
      cout<<"Total Amount  is :"<<totalamount<<endl;
      shopAgain:
      cout<<" Do you want to shopping again ,Yes or No ?"<<endl;
      cin>>choiceagain;
      if(choiceagain=="Yes" || choiceagain=="yes" || choiceagain=="YES"){
        goto startagain;
      }
      else if(choiceagain=="No" || choiceagain=="no" || choiceagain=="NO"){
      cout<<"THANK YOU FOR SHOPPING"<<endl;
    }
    else{
   cout<<"you have entered wrong option ,please type again "<<endl;
   goto shopAgain;
    }

}
    else{
        cout<<"You have enter wrong option ,please enter 'yes' to start shopping "<<endl;
        goto start;
    }
}
float onlineshopping(){
    char SelectChoices;
    char items;
    float billingAmount;
    int quantity;
cout<<" >>>>>>>>>>>>>>>>>>>>>>>>>>>>>> WELCOME TO ONLINE SHOPPING <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
cout<<"..................Please Follow The Instruction......................"<<endl;
cout<<"(1) Please Enter 'M' to order Mobile phones"<<endl;
cout<<"(2) Please Enter 'L' to order Laptops"<<endl;
cout<<"(3) Please Enter 'D' to order desktops"<<endl;
cout<<"(4) Please Enter 'W' to order Washing Machines"<<endl;
cout<<"(5) Please Enter 'T' to order tops for womens"<<endl;
cin>>SelectChoices;


// ***********************for mobile phones***************************
if(SelectChoices=='m' ||SelectChoices=='M'){
mobilelabel:
cout<<"Mobiles Details "<<endl;
cout<<"(1) SAMSUNG => Price : 35000"<<endl;
cout<<"(2) APPLE => Price : 100000"<<endl;
cout<<"(3) REALME => Price : 20000"<<endl;
cout<<"(4) VIVO => Price : 10000"<<endl;
cout<<"(5) README => Price : 25000"<<endl;
cout<<"Please Enter Your Choice that you want to buy :"<<endl;
cin>>items;
if(items=='1'){
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*35000;
}
else if(items=='2'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*100000;
}
else if(items=='3'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*20000;
}
else if(items=='4'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*10000;
}
else if(items=='5'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*25000;
}
else{
    cout<<"You have entered wrong option,please type again"<<endl;
    goto mobilelabel;
}
}


// ***********************for mobile phones***************************
if(SelectChoices=='l' ||SelectChoices=='L'){
laptoplabel:
cout<<"Laptops Details "<<endl;
cout<<"(1) Acer => Price : 35000"<<endl;
cout<<"(2) Dell => Price : 60000"<<endl;
cout<<"(3) Lenova => Price : 85000"<<endl;
cout<<"(4) ASUS => Price : 500000"<<endl;
cout<<"(5) Macbook => Price : 200000"<<endl;
cout<<"Please Enter Your Choice that you want to buy :"<<endl;
cin>>items;
if(items=='1'){
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*35000;
}
else if(items=='2'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*60000;
}
else if(items=='3'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*85000;
}
else if(items=='4'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*500000;
}
else if(items=='5'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*200000;
}
else{
    cout<<"You have entered wrong option,please type again"<<endl;
    goto laptoplabel;
}
}


// ***********************for desltop phones***************************
 else if(SelectChoices=='d' ||SelectChoices=='D'){
desktoplabel:
cout<<"Desktop Details "<<endl;
cout<<"(1) KDE plasma5 => Price : 45000"<<endl;
cout<<"(2) UKUI => Price : 220000"<<endl;
cout<<"(3) BUDGIE => Price : 300000"<<endl;
cout<<"(4) LUMINA => Price : 400000"<<endl;
cout<<"(5) LXQT => Price : 250000"<<endl;
cout<<"Please Enter Your Choice that you want to buy : "<<endl;
cin>>items;
if(items=='1'){
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*45000;
}
else if(items=='2'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*220000;
}
else if(items=='3'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*300000;
}
else if(items=='4'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*400000;
}
else if(items=='5'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*250000;
}
else{
    cout<<"You have entered wrong option,please type again"<<endl;
    goto desktoplabel;
}
}


// ***********************for mobile phones***************************
if(SelectChoices=='w' ||SelectChoices=='W'){
WashingMlabel:
cout<<"Washing Machine Details "<<endl;
cout<<"(1) Whirlpool => Price : 50000"<<endl;
cout<<"(2) Godrej => Price : 90000"<<endl;
cout<<"(3) IFB => Price : 24000"<<endl;
cout<<"(4) Bosch => Price : 80000"<<endl;
cout<<"(5) Panasonic => Price : 70000"<<endl;
cout<<"Please Enter Your Choice that you want to buy : "<<endl;
cin>>items;
if(items=='1'){
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*50000;
}
else if(items=='2'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*90000;
}
else if(items=='3'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*24000;
}
else if(items=='4'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*80000;
}
else if(items=='5'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*70000;
}
else{
    cout<<"You have entered wrong option,please type again"<<endl;
    goto WashingMlabel;
}
}


// ***********************for tops for women***************************
if(SelectChoices=='T' ||SelectChoices=='t'){
topslabel:
cout<<"Women Tops Details "<<endl;
cout<<"(1) sleeveless => Price : 600"<<endl;
cout<<"(2) Crop Top => Price : 1000"<<endl;
cout<<"(3) Neck Cut => Price : 800"<<endl;
cout<<"(4) Full Sleeve => Price : 1200"<<endl;
cout<<"(5) Long Tops => Price : 700"<<endl;
cout<<"Please Enter Your Choice that you want to buy : "<<endl;
cin>>items;
if(items=='1'){
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*600;
}
else if(items=='2'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*1000;
}
else if(items=='3'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*800;
}
else if(items=='4'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*1200;
}
else if(items=='5'){
      cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    billingAmount=billingAmount+quantity*700;
}
else{
    cout<<"You have entered wrong option,please type again"<<endl;
    goto topslabel;
}
}


return billingAmount;
}