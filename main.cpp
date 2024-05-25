#include<bits/stdc++.h>
#include<sstream>
#include<windows.h>
#include<fstream>
using namespace std;

class Bill{
      private:
            int rate,quantity;
            string item;

      public:
            // Bill(string item,int rate,int quantity)
            // {
            //       rate = rate;
            //       quantity = quantity;
            //       item = item;
            // }
      
      void setItem(string item)
      {
            this->item = item;
      }
      void setRate(int rate)
      {
            this->rate = rate;
      }
      void setQuantity(int qua)
      {
            this->quantity = qua;
      }

      string getItem()
      {
            return item;
      }
      int getRate()
      {
            return rate;
      }
      int getQuantity()
      {
            return quantity;
      }


};

void addItem(Bill &b)
{
      bool exit = false;
      while(!exit)
      {
            cout << "press 1 to add " << endl;
            cout << "press 2 to close " << endl;
            int choice;
            cin >> choice;

            if(choice == 1)
            {
                  system("cls");
                  string item;
                  int rate, quantity;
                  cout << "Enter the item name" << endl;
                  cin >> item;

                  b.setItem(item);

                  cout << "Enter the rate of the item" << endl;
                  cin >> rate;

                  b.setRate(rate);

                  cout << "Enter quantity of the item" << endl;
                  cin >> quantity;

                  b.setQuantity(quantity);

                  ofstream out("C:\\Users\\FIRDAUS JAWED\\Desktop\\billing super market\\bill.txt", ios ::app);
                  if(!out)
                  {
                        cout << "Error : File can't open!!" << endl;
                  }
                  else{
                        out << b.getItem() << " : " << b.getRate() << " : " << b.getQuantity() << endl<<endl;
                  }

                  out.close();
                  cout << "item added successfully!" << endl;
                  Sleep(3000);
            }
            else if(choice == 2)
            {
                  exit = true;
                  system("cls");
                  cout << "Back to main menu" << endl;
                  Sleep(3000);
            }
      }
}

int main()
{
      Bill b;
      bool exit = false;
      while(!exit) 
      {
            system("cls");
            cout << "Welcome to the super market billing system" << endl;
            cout << "press 1 to add item" << endl;
            cout << "press 2 to print items" << endl;
            cout << "press 3 to exit" << endl;
            int val;
            cin>>val;

            if(val == 1)
            {
                  system("cls");
                  addItem(b);
                  Sleep(3000);
            }
            else if(val == 3)
            {
                  exit = true;
            }
      }
}