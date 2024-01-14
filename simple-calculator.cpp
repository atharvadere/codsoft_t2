#include<iostream>

using namespace std;

class solution{
    public:
    void calci();
};

void solution :: calci()
{   int choice;
    char choic;
    float num1,num2,res;
    cout<<"\nSelect the operation :\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
    cout<<"\nEnter your choice :";
    invalidchoice:
    cin>>choice;

    if(choice<=0 || choice>4)
    {
        cout<<"\nPlease select valid option !\nRenter your choice :";
        goto invalidchoice;
    }
    cout<<"\nEnter the numbers :\nNumber 1 :";
    cin>>num1;
    cout<<"Number 2 :";
    cin>>num2;
    switch (choice)
    {
        case 1:
        res=num1+num2;
        cout<<"\nThe addition of two numbers is "<<res;
        break;

        case 2:
        res=num1-num2;
        cout<<"\nThe Substraction of two numbers is "<<res;
        break;

        case 3:
        res=num1*num2;
        cout<<"\nThe multiplication of two numbers is "<<res;
        break;

        case 4:
        if(num2==0)
        {
            cout<<"Error : Divide by Zero not allowed !";
            break;
        }
        res=num1/num2;
        cout<<"\nThe Division of two numbers is "<<res;
        break;

    }
    cout<<"\n\nDo you want to go to Main menu (Y) or Exit (N) :";
    invalidchoic:
    cin>>choic;
    if(choic=='Y' || choic=='y')
        calci();
    else if(choic=='N' || choic=='n')
    {
        cout<<"\nThank You !\n";
        return;
    }    
    else
        {
            cout<<"\nPlease enter valid choice !\nRe-enter your choice :";
            goto invalidchoic;
        }
}

int main()
{   cout<<"Task 2 : Simple Calculator\n";
    solution obj;
    obj.calci();
    return 0;
}