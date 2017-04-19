#ifndef EFPOS_H_INCLUDED
#define EFPOS_H_INCLUDED

int i;
int ii;
int iii;
float money = 32.50;
float burger = 15.00;
int burgerCount;

class Creditcard
{
   public:
      char ch[17];
      char csv[4];
      char pin[5];
      unsigned int repNo = 0;
  // BURGER FUNCTIONS
      void printRecipt();
      void Declined();
      void Approved();
      void showMoney();
      void buyItem();
      void itemName();
      void getMoney();
      
  //CARD FUNCTIONS
      void Purchase();
      void EnterCC();
      void EnterCSV();
      void EnterCCpin();
};
#endif //EFPOS_H_INCLUDED
