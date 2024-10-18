#include<iostream>
using namespace std;
int main()
{
    int choice,number1,number2;
    int addition,subtraction,multiplication,division,modulus;
    do{
    cout<<"************************"<<endl;
    cout<<"1. Addition"<<"\n"<<"2. Subtraction"<<"\n"<<"3. Multiplication"<<"\n"<<"4. Division"<<"\n"<<"5. Modulus"<<"\n"<<"6. Exit"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;


    switch(choice)
    {
        case 1:
        {
                cout<<"You chose 1.....Addition"<<endl;
                cout<<"Enter 2 numbers seperated by a space: "<<endl;
                cin>>number1>>number2;
                addition=number1+number2;
                cout<<"Addition is:"<<addition<<endl;
                break;
        }
        case 2:
        {
                cout<<"You chose 2.....Subtraction"<<endl;
                cout<<"Enter 2 numbers seperated by a space: "<<endl;
                cin>>number1>>number2;
                subtraction=number1-number2;
                cout<<"Subtraction is:"<<subtraction<<endl;
                break;
        }
        case 3:
        {
                cout<<"You chose 3.....Multiplication"<<endl;
                cout<<"Enter 2 numbers seperated by a space: "<<endl;
                cin>>number1>>number2;
                multiplication=number1*number2;
                cout<<"Multiplication is:"<<multiplication<<endl;
                break;
        }
        case 4:
        {
                cout<<"You chose 4.....Division"<<endl;
                cout<<"Enter 2 numbers seperated by a space: "<<endl;
                cin>>number1>>number2;
                division=number1/number2;
                cout<<"Division is:"<<division<<endl;
                break;
        }
        case 5:
        {
                cout<<"You chose 5.....Modulus"<<endl;
                cout<<"Enter 2 numbers seperated by a space: "<<endl;
                cin>>number1>>number2;
                modulus=number1%number2;
                cout<<"Modulus is:"<<modulus<<endl;
                break;
        }
        case 6:
        {
            cout<<"Good bye !"<<endl;
            break;
        }
        default:
        {
            cout<<"please select valid choice !"<<endl;
            break;
        
    }}}while(choice!=6);
    return 0;
}
