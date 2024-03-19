#include<iostream>
using namespace std;
class bank
{
    
    private: string name;
    private : int acc;
    private :int balance;
    private :int password;
    public:
    void setname(string a)
    {
        name = a;
    }
    void setacc(int y){
    acc = y;
    }
  void setpass(int x)  
   { password = x;}
   void deposite(int h){
     balance +=  h;
   }
void getname()
{
    cout<<name;
}
void getaccount()
{
    cout<<acc;

}
void getbalance()
{
    cout<<balance;
}
void debit(int c)
{  if (balance>=c)
{
    balance-=c;
    cout<<c<<"debited form"<<acc<<std::endl;
}else{
cout<<"low balance";
}
}
void credit(int c)
{
    balance+=c;
    cout<<c<<"amount is credited\n";
}

  
};
void trasition(bank a, bank b,int c)
{
    cout<<"sender name:";
    a.getname();
    cout<<"Reciever name:";
    b.getname();
    cout<<"Sender acc number:";
    a.getaccount();
    cout<<"reciver acc number:";
    b.getaccount();
    a.debit(c);
    b.credit(c);

}
int main(){
    bank cos1 ,cos2;
    
    cos1.setname("mayank");
    cos1.setacc(72228);
    cos1.setpass(12254);
    cos1.deposite(56);
    cos2.setname("yash");
    cos2.setacc(5689);
    cos2.setpass(456);
    cos2.deposite(56);
    trasition(cos1,cos2,20);
    cos1.getbalance();
    cos2.getbalance();

    return 0;
}
