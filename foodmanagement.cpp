#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>
#include<unistd.h>
#include<cstdlib>
#include<stdio.h>
#include<queue>

using namespace std;


struct menuitem //defintion of a struct to store data about resturant
{
       string menulist;
       double price;
};

class R1{
       string name,address;
       string phone ;
       queue<pair<int,int>> q;
       public:
              menuitem menu[10]; //Instance of a struct to store data of 7 resturant items
              void getdata(); //prototype of a function to loads data about the items in struct
              void showdata(); // prototype of a function show the loaded data
              void selectItems(); //prototype of a function  to select the items
              void cal(); //prototype of a function to calculate the bill
              R1()
              {
                  cout<<"\n Welcome to CAKEBIKIS"<<endl;
              }
              ~R1(){}
};

class R2{
       string name,address;
       string phone ;
       queue<pair<int,int>> q;
       public:       
              menuitem menu[10]; //Instance of a struct to store data of 7 resturant items
              void getdata(); //prototype of a function to loads data about the items in struct
              void showdata(); // prototype of a function show the loaded data
              void selectItems(); //prototype of a function  to select the items
              void cal(); //prototype of a function to calculate the bill
              R2()
              {  
                  cout<<"\n Welcome to THE SPICE ROUTE "<<endl;
              }
              ~R2(){}
};

class R3{
       string name,address;
       string phone ;
       queue<pair<int,int>> q;
       public:
              menuitem menu[10]; //Instance of a struct to store data of 7 resturant items
              void getdata(); //prototype of a function to loads data about the items in struct
              void showdata(); // prototype of a function show the loaded data
              void selectItems(); //prototype of a function  to select the items
              void cal(); //prototype of a function to calculate the bill
              R3()
              {
                  cout<<"\n Welcome to HUNGER GAMES "<<endl;
              }
              ~R3(){}
};

void R1::getdata() //a function to get load the data
{
       menu[0].menulist = "Coffee";
       menu[0].price = 50.00;
       menu[1].menulist = "Tea";
       menu[1].price = 20.00;
       menu[2].menulist = "Bread";
       menu[2].price = 50.00;
       menu[3].menulist = "Atta Biscuit[250 g]";
       menu[3].price = 130.00;
       menu[4].menulist = "Jam Roll[1 Piece]";
       menu[4].price = 15.00;
       menu[5].menulist = "Vanilla Cream Roll";
       menu[5].price = 25.00;
       menu[6].menulist = "Chocolate Cream Roll";
       menu[6].price = 40.00;
       menu[7].menulist = "Chocolate Cake[1 Pound]";
       menu[7].price = 350.00;
       menu[8].menulist = "Cassata Cake[1 Pound]";
       menu[8].price = 455.00;
       menu[9].menulist = "Fruit Cake[1 Pound]";
       menu[9].price = 400.00;
}
void R1::showdata() //a function to display menu
{
       cout << "Items offered by the restaurant are" << endl;
       cout << 1 << "\t" << menu[0].menulist << setw(39) << "RS " << menu[0].price << endl;
       cout << 2 << "\t" << menu[1].menulist << setw(42) << "RS " << menu[1].price << endl;
       cout << 3 << "\t" << menu[2].menulist << setw(40) << "RS " << menu[2].price << endl;
       cout << 4 << "\t" << menu[3].menulist << setw(26) << "RS " << menu[3].price << endl;
       cout << 5 << "\t" << menu[4].menulist << setw(28) << "RS " << menu[4].price << endl;
       cout << 6 << "\t" << menu[5].menulist << setw(27) << "RS " << menu[5].price << endl;
       cout << 7 << "\t" << menu[6].menulist << setw(25) << "RS " << menu[6].price << endl;
       cout << 8 << "\t" << menu[7].menulist << setw(22) << "RS " << menu[7].price << endl;
       cout << 9 << "\t" << menu[8].menulist << setw(24) << "RS " << menu[8].price << endl;
       cout << 10 << "\t" << menu[9].menulist << setw(26) << "RS " << menu[9].price << endl;


}
void R1::selectItems() //function select the items from the menu
{
       int ch,quantity;
       char con;
       while(1){
              cout << "\n Enter your choice : ";
              cin >> ch; //takes the choice from the user to select the item
              if(ch>10)
              {
                     cout<<"\n Invalid Choice !! Try again.";
                     continue;
              }
              quantities:
              cout << " Enter the Quantity : ";
              cin >> quantity;
              if(quantity>5)
              {
                     cout<<"\n SORRY !! You can't order more than 5 quantities of any product. Try again with lesser quantity.\n";
                     goto quantities;
              }
              switch (ch)
              {
              case 1:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[0].menulist << "  , Qty : "<<quantity<<endl;

                     break;
              }
              case 2:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[1].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 3:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[2].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 4:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[3].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 5:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[4].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 6:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[5].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 7:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[6].menulist << "  , Qty : "<<quantity<< endl;


                     break;
              }
              case 8:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[7].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 9:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[8].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 10:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[9].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              default:
                     cout << "\n INVALID INPUT!" << endl;
              }
              cout << "\n Want to order more? (Y/N) : ";
              cin >> con;
              if(con=='n'||con=='N')
              {
                     cin.ignore();
                     break;
              }

       } 
       cout << endl;
}
void R1::cal()
{
       char promo,z;
       string promocode;
       double total = 0, tax, due,discount;
       cout<<"\n Enter your name : ";
       getline(cin,name);
       cout<<"\n Enter your phone number : ";
       cin>>phone;
       cin.ignore();
       cout<<"\n Enter your address : ";
       getline(cin,address);

       cout << "\n      ----------- CAKEBIKIS----------\n" << endl;
       cout<<"\n Please wait while we generate your bill....\n";
       sleep(2);

       cout<<" NAME "<<setw(20)<<"Qty"<<setw(26)<<"Price\n\n";
       while(!q.empty())
              {
                     pair<int,int> p = q.front();
                     int i = (p.second);
                     int len = (menu[i].menulist).size();
                     cout << menu[i].menulist << setw(24-len)<< p.first << setw(24) <<"Rs "<< menu[i].price*p.first << endl;
                     total = total + (menu[i].price*p.first);
                     q.pop();
              }

       tax = total*0.18; //calculate the tax on the total price
       due = total + tax; //calculate the price after adding tax
       cout << "------------------------------------------------------" << endl;
       cout << "        Tax " << setw(36) <<"Rs " <<tax << endl;
       cout << "------------------------------------------------------" << endl;
       cout << "\n     Amount " << setw(36)<<"Rs "<<due << endl;
       cout << "------------------------------------------------------" << endl;

       disc:
       cout<<"\n\n Want to enter any promocode? (Y/N) : ";
       cin>>promo ;
       if(promo=='Y'||promo=='y')
       {
              cout<<"\n Enter Promocode : ";
              cin>>promocode;
              if(promocode.compare("TOMATO200")==0 || promocode.compare("IN200")==0)
              {
                     if(total>=400)
                     {
                            total = total - 200;
                            discount = 200;
                     }
                     else
                     {
                            total = total/2;
                            discount = total;
                     }
                     due = total + tax;
                     cout<<"\n\n Congrats!! You got a discount worth Rs "<<discount <<" (50% off upto Rs200) on your order !! \n";
                     cout<<"\n\n Amount due now : "<<due<<"\n\n";
                     cout<<" Press Any Key to Confirm Your Order : ";
                     cin>>z;
                     sleep(2);
              }
              else
              {
                     cout<<"\n Invalid promocode!! Try Again !!";
                     goto disc;
              }
       }
       cout<<"\n COMFIRMING YOUR ORDER... PLEASE WAIT......\n";
       sleep(4);
       srand(time(0));
       cout<<"\n ------------ ORDER ID : "<<rand()%100+100<<" ------------\n\n";
       cout<<"\n Dear "<<name<<", Your Order has been placed successfully with due amount : "<<due<<" .";
       cout<<"\n\n Your order will get delivered to "<<address<<" within 45 minutes .";
       cout<<"\n\n You will be contacted on "<<phone<<" for further communications.";
       ofstream fout1("orders.txt", ios::app);
       fout1<<phone<<","<<name<<","<<address<<","<<due<<","<<"Cakebikis,";
}
void R2::getdata() //a function to get load the data
{
       menu[0].menulist = "Paneer Masala";
       menu[0].price = 200.00;
       menu[1].menulist = "Dal Makhani";
       menu[1].price = 190.00;
       menu[2].menulist = "Malai Kofta";
       menu[2].price = 200.00;
       menu[3].menulist = "Punjabi Chole";
       menu[3].price = 190.00;
       menu[4].menulist = "Jeera Rice";
       menu[4].price = 150.00;
       menu[5].menulist = "Veg Pulao";
       menu[5].price = 180.00;
       menu[6].menulist = "Special Thali";
       menu[6].price = 300.00;
       menu[7].menulist = "Tawa Butter Roti";
       menu[7].price = 20.00;
       menu[8].menulist = "Butter Naan";
       menu[8].price = 40.00;
       menu[9].menulist = "Special Lassi";
       menu[9].price = 60.00;

}

void R2::showdata() //a function to display menu
{
       cout << "Items offered by the restaurant are" << endl;
       cout << 1 << "\t" << menu[0].menulist << setw(32) << "RS " << menu[0].price << endl;
       cout << 2 << "\t" << menu[1].menulist << setw(34) << "RS " << menu[1].price << endl;
       cout << 3 << "\t" << menu[2].menulist << setw(34) << "RS " << menu[2].price << endl;
       cout << 4 << "\t" << menu[3].menulist << setw(32) << "RS " << menu[3].price << endl;
       cout << 5 << "\t" << menu[4].menulist << setw(35) << "RS " << menu[4].price << endl;
       cout << 6 << "\t" << menu[5].menulist << setw(36) << "RS " << menu[5].price << endl;
       cout << 7 << "\t" << menu[6].menulist << setw(32) << "RS " << menu[6].price << endl;
       cout << 8 << "\t" << menu[7].menulist << setw(29) << "RS " << menu[7].price << endl;
       cout << 9 << "\t" << menu[8].menulist << setw(34) << "RS " << menu[8].price << endl;
       cout << 10 << "\t" << menu[9].menulist << setw(32) << "RS " << menu[9].price << endl;

}
void R2::selectItems() //function select the items from the menu
{
       int ch,quantity;
       char con;
       while(1){
              cout << "\n Enter your choice : ";
              cin >> ch; //takes the choice from the user to select the item
              if(ch>10)
              {
                     cout<<"\n Invalid Choice !! Try again.";
                     continue;
              }
              quantities:
              cout << " Enter the Quantity : ";
              cin >> quantity;
              if(quantity>5)
              {
                     cout<<"\n SORRY !! You can't order more than 5 quantities of any product. Try again with lesser quantity.\n";
                     goto quantities;
              }
              switch (ch)
              {
              case 1:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[0].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 2:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[1].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 3:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[2].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 4:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[3].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 5:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[4].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 6:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[5].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 7:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[6].menulist << "  , Qty : "<<quantity<< endl;


                     break;
              }
              case 8:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[7].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 9:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[8].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 10:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[9].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              default:
                     cout << "\n INVALID INPUT!" << endl;
              }
              cout << "\n Want to order more? (Y/N) : ";
              cin >> con;
              if(con=='n'||con=='N')
              {
                     cin.ignore();
                     break;
              }

       } 
       cout << endl;
}
void R2::cal()
{
       char promo,z;
       string promocode;
       double total = 0, tax, due,discount;
       cout<<"\n Enter your name : ";
       getline(cin,name);
       cout<<"\n Enter your phone number : ";
       cin>>phone;
       cin.ignore();
       cout<<"\n Enter your address : ";
       getline(cin,address);
       cout << "\n     ----------- THE SPICE ROUTE---------\n" << endl;
       cout<<"\n Please wait while we generate your bill....\n";
       sleep(2);
       cout<<" NAME "<<setw(20)<<"Qty"<<setw(26)<<"Price\n\n";
       while(!q.empty())
              {
                     pair<int,int> p = q.front();
                     int i = (p.second);
                     int len = (menu[i].menulist).size();
                     cout << menu[i].menulist << setw(24-len)<< p.first << setw(24) <<"Rs "<< menu[i].price*p.first << endl;
                     total = total + (menu[i].price*p.first);
                     q.pop();
              }
       tax = total*0.18; //calculate the tax on the total price
       due = total + tax; //calculate the price after adding tax
       cout << "-----------------------------------------------------" << endl;
       cout << "        Tax " << setw(36) <<"Rs " <<tax << endl;
       cout << "-----------------------------------------------------" << endl;
       cout << "\n     Amount " << setw(36)<<"Rs "<<due << endl;
       cout << "-----------------------------------------------------" << endl;

       disc:
       cout<<"\n\n Want to enter any promocode? (Y/N) : ";
       cin>>promo ;
       if(promo=='Y'||promo=='y')
       {
              cout<<"\n Enter Promocode : ";
              cin>>promocode;
              if(promocode.compare("TOMATO200")==0 || promocode.compare("IN200")==0)
              {
                     if(total>=400)
                     {
                            total = total - 200;
                            discount = 200;
                     }
                     else
                     {
                            total = total/2;
                            discount = total;
                     }
                     due = total + tax;
                     cout<<"\n\n Congrats!! You got a discount worth Rs "<<discount <<" (50% off upto Rs200) on your order !! \n";
                     cout<<"\n\n Amount due now : "<<due<<"\n\n";
                     cout<<" Press Any Key to Confirm Your Order : ";
                     cin>>z;
                     sleep(2);
              }
              else
              {
                     cout<<"\n Invalid promocode!! Try Again !!";
                     goto disc;
              }
       }
       cout<<"\n COMFIRMING YOUR ORDER... PLEASE WAIT......";
       sleep(4);
       srand(time(0));
       cout<<"\n ------------ ORDER ID : "<<rand()%100+100<<" ------------\n\n";
       cout<<"\n Dear "<<name<<", Your Order has been placed successfully with due amount : "<<due<<" .";
       cout<<"\n\n Your order will get delivered to "<<address<<" within 45 minutes .";
       cout<<"\n\n You will be contacted on "<<phone<<" for further communications.";
       ofstream fout2("orders.txt",ios::app);
       fout2<<phone<<","<<name<<","<<address<<","<<due<<","<<"TheSpiceRoute,";
}

void R3::getdata() //a function to get load the data
{
       menu[0].menulist = "Hot and Sour Soup";
       menu[0].price = 125.00;
       menu[1].menulist = "French Fries";
       menu[1].price = 90.00;
       menu[2].menulist = "Veg Chowmein";
       menu[2].price = 120.00;
       menu[3].menulist = "Veg Momos";
       menu[3].price = 150.00;
       menu[4].menulist = "Chili Paneer";
       menu[4].price = 250.00;
       menu[5].menulist = "Veg Manchurian";
       menu[5].price = 180.00;
       menu[6].menulist = "Sizzling Nachos";
       menu[6].price = 160.00;
       menu[7].menulist = "Veg Burger";
       menu[7].price = 120.00;
       menu[8].menulist = "Margherita Pizza";
       menu[8].price = 150.00;
       menu[9].menulist = "Signature Pizza";
       menu[9].price = 250.00;

}
void R3::showdata() //a function to display menu
{
       cout << "Items offered by the restaurant are" << endl;
       cout << 1 << "\t" << menu[0].menulist << setw(28) << "RS " << menu[0].price << endl;
       cout << 2 << "\t" << menu[1].menulist << setw(33) << "RS " << menu[1].price << endl;
       cout << 3 << "\t" << menu[2].menulist << setw(33) << "RS " << menu[2].price << endl;
       cout << 4 << "\t" << menu[3].menulist << setw(36) << "RS " << menu[3].price << endl;
       cout << 5 << "\t" << menu[4].menulist << setw(33) << "RS " << menu[4].price << endl;
       cout << 6 << "\t" << menu[5].menulist << setw(31) << "RS " << menu[5].price << endl;
       cout << 7 << "\t" << menu[6].menulist << setw(30) << "RS " << menu[6].price << endl;
       cout << 8 << "\t" << menu[7].menulist << setw(35) << "RS " << menu[7].price << endl;
       cout << 9 << "\t" << menu[8].menulist << setw(29) << "RS " << menu[8].price << endl;
       cout << 10 << "\t" << menu[9].menulist << setw(30) << "RS " << menu[9].price << endl;

}
void R3::selectItems() //function select the items from the menu
{
       int ch,quantity;
       char con;
       while(1){
              cout << "\n Enter your choice : ";
              cin >> ch; //takes the choice from the user to select the item
              if(ch>10)
              {
                     cout<<"\n Invalid Choice !! Try again.";
                     continue;
              }
              quantities:
              cout << " Enter the Quantity : ";
              cin >> quantity;
              if(quantity>5)
              {
                     cout<<"\n SORRY !! You can't order more than 5 quantities of any product. Try again with lesser quantity.\n";
                     goto quantities;
              }
              switch (ch)
              {
              case 1:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[0].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 2:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[1].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 3:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[2].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 4:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[3].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 5:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[4].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 6:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[5].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 7:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[6].menulist << "  , Qty : "<<quantity<< endl;


                     break;
              }
              case 8:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[7].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 9:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[8].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              case 10:
              {
                     q.push({quantity,ch-1});
                     cout << " You have Selected : " << menu[9].menulist << "  , Qty : "<<quantity<< endl;

                     break;
              }
              default:
                     cout << "\n INVALID INPUT!" << endl;
              }
              cout << "\n Want to order more? (Y/N) : ";
              cin >> con;

              if(con=='n'||con=='N')
              {
                     cin.ignore();
                     break;
              }


       } 
       cout << endl;
}
void R3::cal()
{
       char promo,z;
       string promocode;
       double total = 0, tax, due,discount;
       cout<<"\n Enter your name : ";
       getline(cin,name);
       cout<<"\n Enter your phone number : ";
       cin>>phone;
       cin.ignore();
       cout<<"\n Enter your address : ";
       getline(cin,address);
       cout << "\n         ------------- HUNGER GAMES ----------\n" << endl;
       cout<<"\n Please wait while we generate your bill....\n";
       sleep(2);
       cout<<" NAME "<<setw(20)<<"Qty"<<setw(26)<<"Price\n\n";
       while(!q.empty())
              {
                     pair<int,int> p = q.front();
                     int i = (p.second);
                     int len = (menu[i].menulist).size();
                     cout << menu[i].menulist << setw(24-len)<< p.first << setw(24) <<"Rs "<< menu[i].price*p.first << endl;
                     total = total + (menu[i].price*p.first);
                     q.pop();
              }
       tax = total*0.18; //calculate the tax on the total price
       due = total + tax; //calculate the price after adding tax
       cout << "----------------------------------------------------" << endl;
       cout << "        Tax " << setw(36) <<"Rs " <<tax << endl;
       cout << "----------------------------------------------------" << endl;
       cout << "\n     Amount " << setw(36)<<"Rs "<<due << endl;
       cout << "----------------------------------------------------" << endl;

       disc:
       cout<<"\n\n Want to enter any promocode? (Y/N) : ";
       cin>>promo ;
       if(promo=='Y'||promo=='y')
       {
              cout<<"\n Enter Promocode : ";
              cin>>promocode;
              if(promocode.compare("TOMATO200")==0 || promocode.compare("IN200")==0)
              {
                     if(total>=400)
                     {
                            total = total - 200;
                            discount = 200;
                     }
                     else
                     {
                            total = total/2;
                            discount = total;
                     }
                     due = total + tax;
                     cout<<"\n\n Congrats!! You got a discount worth Rs "<<discount <<" (50% off upto Rs200) on your order !! \n";
                     cout<<"\n\n Amount due now : "<<due<<"\n\n";
                     cout<<" Press Any Key to Confirm Your Order : ";
                     cin>>z;
                     sleep(2);
              }
              else
              {
                     cout<<"\n Invalid promocode!! Try Again !!";
                     goto disc;
              }
       }
       cout<<"\n COMFIRMING YOUR ORDER... PLEASE WAIT......\n";
       sleep(4);
       srand(time(0));
       cout<<"\n ------------ ORDER ID : "<<rand()%100+100<<" ------------\n\n";
       cout<<"\n Dear "<<name<<", Your Order has been placed successfully with due amount : "<<due<<" .";
       cout<<"\n\n Your order will get delivered to "<<address<<" within 45 minutes .";
       cout<<"\n\n You will be contacted on "<<phone<<" for further communications.";
       ofstream fout3("orders.txt",ios::app);
       fout3<<phone<<","<<name<<","<<address<<","<<due<<","<<"HungerGames,";

}

int main()
{
       int ch,h;
       cout<<"\n "<<"----------------------- WELCOME TO TOMATO ------------------------ "<<endl;
       cout<<"\n\n ---------------- A Online Food Delivery Platform -----------------";
       sleep(2);
       cout<<"\n\n  MADE BY - ";
       sleep(2);
       cout<<"         KARTIK DANGI       &      PRAKARSH MATHUR";
       cout<<"\n\n 1. User Reviews about our platform ( You can also give us rating at end )\n 2. Online food ordering from selected restraunts\n 3. To check your previous order\n";
       cout<<"\n\n PLEASE ENTER YOUR CHOICE : ";
       cin>>h;
       if(h==1)
       {
              int aa=0;
              ifstream fin;
              fin.open("review.txt",ios::in);
              string mytext;
              while (getline (fin, mytext,',')) {
                cout<<endl;
              if(aa==0)
                {cout<<" NAME : "<<mytext; aa++;}
              else if(aa==1)
                {cout<<" RATING : "<<mytext; aa++;}
              else
                {cout<<" REVIEW : "<<mytext<<endl; aa=0;}
              }
              cout<<endl;
              char q;
              cout<<"\n Want to order something?(Y/N) : ";
              cin>>q;
              if(q=='Y' || q=='y')
              {
                     goto order;
              }
              else
              {
                     cout<<"\n Thanks for visiting us....";
                     exit(0);
              }
       }
       if(h==3)
       {
           string info,fname ; int kk=0;
           ifstream fout;
           fout.open("orders.txt",ios::in );
           cout<<"\n\n Enter Phone Number from which you have booked order from us : ";
           cin>>info;
            while(getline(fout,fname,','))
            {
                 if(kk==1)
                 {
                    cout<<" NAME : "<<fname<<endl; kk++;
                 }
                 else if(kk==2)
                 {
                     cout<<" ADDRESS : "<<fname<<endl; kk++;
                 }
                 else if(kk==3)
                 {
                     cout<<" AMOUNT : "<<fname<<endl; kk++;
                 }
                 else if(kk==4)
                 {
                     cout<<" RESTRAUNT : "<<fname<<endl<<endl; kk=0;
                 }
                 else
                 {}

                if(info.compare(fname)==0)
                    kk=1;
             }
             char q;
              cout<<"\n Want to order something?(Y/N) : ";
              cin>>q;
              if(q=='Y' || q=='y')
              {
                     goto order;
              }
              else
              {
                     cout<<"\n Thanks for visiting us....";
                     exit(0);
              }
       }
       order:
       cout<<"\n\n RESTRAUNTS AVAILABE CURRENTLY \n 1. CAKEBIKIS           2. THE SPICE ROUTE             3. HUNGER GAMES   ";
       cout<<"\n\n Enter your choice : ";

       cin>>ch;
       switch(ch)
       {
              case 1 : 
              {
                     R1 obj1;
                     obj1.getdata();
                     obj1.showdata();
                     obj1.selectItems(); 
                     obj1.cal(); 
                     break;
              }
              case 2 :
              {
                     R2 obj2;
                     obj2.getdata();
                     obj2.showdata();
                     obj2.selectItems(); 
                     obj2.cal(); 
                     break;
              }
              case 3 :
              {
                     R3 obj3;
                     obj3.getdata();
                     obj3.showdata();
                     obj3.selectItems(); 
                     obj3.cal(); 
                     break;
              }
       }
       char p;
       cout<<"\n\n Want to enter a review for us ?(Y/N) :";
       cin>>p;
       if(p=='Y'||p=='y')
       {
              string fname,review;
              int rate;
              ofstream fout;
              fout.open("review.txt",ios::app);
              cout<<"\n Enter your first name : ";
              cin>>fname;
              cout<<"\n Rate us from (1-5) :";
              cin>>rate;
              cin.ignore();
              cout<<"\n Enter your review : ";
              getline(cin,review);
              fout<<fname<<","<<rate<<","<<review<<",";
              cout<<"\n THANKS FOR REVIEWING US.... HOPE TO SEE YOU SOON!!";
       }
       else
       {
              cout<<"\n NO PROBLEM!! THANKS FOR ORDERING WITH US!! HOPE TO YOU SEE SOON!!";
       }
       return 0;

}