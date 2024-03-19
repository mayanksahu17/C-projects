#include <iostream>
using namespace std;
class bank
{
    int acc_number;
    int password;
    double balance;

public:
    void setpass(int x)
    {
        this->acc_number = x;
    }
    void set_acc_number(int y)
    {
        this->acc_number = y;
    }
    void deposite(int h)
    {
        balance += h;
    }
    void debit(int c)
    {
        if (balance >= c)
        {
            balance = balance - c;
            std::cout << c << "\n\t\t\t\t\t Amount debited";
        }
        else
        {
            std::cout << "\n\t\t\t\t\t low balance";
        }
    }
    void credit(int c)
    {
        balance += c;
        // cout<<c<<"\n\t\t\t\t\t amount is credited\n";
    }
    void checkbalance()
    {
        std::cout << "\n\n\n\n\n\t\t\t\t\tbalance: " << balance << "$" << endl;
    }
    void deposite()
    {
        int depositmoney;
        cout << "\n\n\n\n\n\t\t\t\t\tEnter Amount: ";
        std::cin >> depositmoney;
        balance += depositmoney;
        std::cout << "\n\n\n\n\n\t\t\t\t\tAmount succesfully deposited" << endl;
    }
    void withdraw()
    {
        int withdrawmoney;
        std::cout << "\n\n\n\n\n\t\t\t\t\tEnter Amount: ";
        std::cin >> withdrawmoney;
        if (withdrawmoney <= balance)
        {
            balance = balance - withdrawmoney;
            std::cout << "\n\n\n\n\n\t\t\t\t\tAmount succesfully Withdrawed" << endl;
        }
        else
        {
            std::cout << "\n\n\n\n\n\t\t\t\t\tNot Enough Money" << endl;
        }
    }
} custmer1, custmer2;
void checkacc();
void show();
void trasition()
{
    int d, f, g;
    std::cout << "\n\t\t\t\t\t Enter recivers account number ";
    std::cin >> d;
    if (d == 1199)
    {
        std::cout << "\n\t\t\t\t\t Enter amount :";
        std::cin >> f;
        custmer1.debit(f);
        custmer2.credit(f);
    }
    else if (d == 1188)
    {
        std::cout << "\n\t\t\t\t\t Enter amount :";
        std::cin >> f;
        custmer2.debit(f);
        custmer1.credit(f);
    }
}

void cos1()
{
    std::cout << "\n\t\t\t\t\t ACC.1188xx you have loged in your account";
    int option;
    do
    {
        show();
        std::cout << "\n\t\t\t\t\t Option: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            custmer1.checkbalance();
            break;
        case 2:
            custmer1.deposite();
            break;
        case 3:
            custmer1.withdraw();
            break;
        case 4:
            trasition();
        }
    } while (option != 5);
}
void cos2()
{
    std::cout << "\n\t\t\t\t\t ACC.1188xx you have loged in your account";
    int option;
    do
    {
        show();
        std::cout << "\n\t\t\t\t\t Option: ";
        std::cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            custmer2.checkbalance();
            break;
        case 2:
            custmer2.deposite();
            break;
        case 3:
            custmer2.withdraw();
            break;
        case 4:
            trasition();
        }
    } while (option != 5);
}

void checkacc()
{
    int x, y;
    std::cout << "\n\n\n\n\n\t\t\t\t\tenter account number: ";
    std::cin >> x;
    std::cout << "\n\t\t\t\t\tenter your pasword: ";
    std::cin >> y;

    if (x == 1188 && y == 6263)
    {
        cos1();
    }
    else if (x == 1199 && y == 7273)
    {
        cos2();
    }
}
void show()
{
    std::cout << "\n\n\n\n\n\t\t\t\t\t************PLEASE ENJOY THE SERVICES************" << endl;
    std::cout << "\n\t\t\t\t\t1.Check Balance " << endl;
    std::cout << "\n\t\t\t\t\t2.Deposit " << endl;
    std::cout << "\n\t\t\t\t\t3.Withdraw " << endl;
    std::cout << "\n\t\t\t\t\t4.trasacition " << endl;
    std::cout << "\n\t\t\t\t\t5.EXIT " << endl;
}

int main()
{
    custmer1.set_acc_number(1188);
    custmer2.set_acc_number(1199);
    custmer1.setpass(6263);
    custmer1.setpass(7273);

    char b, y;
    do
    {
        cout << "\n\n\n\n\n\t\t\t\t\t********************WELCOME TO PNB********************";
        checkacc();
        cout << "\n\n\n\n\n\t\t\t\t\tSwitch off the program [y/n]";
        cin >> b;

    } while (b != y);

    system("pause>0");
    return 0;
}