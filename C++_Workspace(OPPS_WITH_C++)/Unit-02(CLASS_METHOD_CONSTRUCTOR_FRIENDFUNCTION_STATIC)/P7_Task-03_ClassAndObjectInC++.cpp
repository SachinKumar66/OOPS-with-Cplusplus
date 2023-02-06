// #include <iostream>
// #include <string>
// using namespace std;

// class TelCall
// {
// private:
//     int phno;
//     string sname;
//     int n;
//     float amt;

// public:
//     TelCall(int phno, string sname, int n)
//     {
//         this->phno = phno;
//         this->sname = sname;
//         this->n = n;
//         this->amt = 0;
//     }

//     void setN(int n)
//     {
//     }

//     // Compute amt
//     void compute()
//     {

//         // 357

//         int m = 0;

//         if (n > 300)
//         {
//             m = n - 300;
//             this->amt = amt + m * 1.5;

//             n = 300;
//         }

//         if (n > 201 && n <= 300)
//         {
//             m = n - 200;
//             this->amt = amt + m * 1.2;

//             n = 200;
//         }

//         if (n > 101 && n <= 200)
//         {
//             m = n - 100;

//             this->amt = amt + m * 1;

//             n = 100;
//         }

//         this->amt = amt + 500;
//     }

//     // Display amt
//     void display()
//     {

//         cout << "Final amount: " << this->amt << endl;
//     }
// };

// int main()
// {

//     TelCall obj(99999, "Akash", 357);

//     obj.compute();
//     obj.display();

//     return 0;
// }
#include<iostream>
#define rentalcharge 500
using namespace std;
class Telcall
{ private:
      long long phno;
      string sname;
      int n;
      float amt=0;
    public:
      Telcall(long long a,string b,int c)
      {
        phno=a;
        sname=b;
        n=c;
      }
      void compute()
      { if(n<=100)
            amt=rentalcharge;
        else if(n<=200)
          amt=n*1.00+rentalcharge;
        else if(n<=300)
          amt=n*1.20+rentalcharge;
        else
          amt=n*1.50+rentalcharge;
      }
      void display()
       {cout<<"Name="<<sname<<endl;
        cout<<"Phone number="<<phno<<endl;
        cout<<"Billing amount="<<amt<<endl; }
};
int main()
{
   Telcall obj(7900655894,"Sachin Kumar Singh",1000);
   obj.compute();
   obj.display();  
}
