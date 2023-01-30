#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdrawl(double balance);

int main(){
    
    double balance = 0;
    int choice = 0;

    do{
        cout << "------------------------------\n";
        cout << "Welcome to Starcodium Bank\n";
        cout << "By SpeedStar101\n";
        cout << "------------------------------\n";
        cout << "Choose an input: \n";
        cout << "------------------------------\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdrawl Money\n";
        cout << "4. Exit\n";
        cout << "------------------------------\n";
        cin >> choice;

        cin.clear(); 
        fflush(stdin);

        switch(choice){
            case 1: 
                showBalance(balance);
                break;
            case 2: 
                balance += deposit();
                showBalance(balance);
                break;
            case 3: 
                balance -= withdrawl(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thank you for visiting Starcodium, have a nice day!\n";
                break;
            default: 
                cout << "Invalid choice\n";
        }
    }while(choice != 4);

    return 0;
}
void showBalance(double balance){
    
    std::cout << "Your balance is: $"<< setprecision(2) << fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount:\n";
        return 0;
    }
}
double withdrawl(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}