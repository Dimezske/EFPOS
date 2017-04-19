/*This Program was Developed by Aidan Flannery, It is a Simulation of an EFPOS Machine.
Date Completed: 3:55 PM 19 Apr 2017*/
#include <iostream>
#include <ctime>
#include <iomanip>
#include <unistd.h>

extern int i;
extern int ii;
extern int iii;
extern float money = 32.50;
extern float burger = 15.00;
extern int burgerCount;

void itemName(){
     std::cout << "Burger             x" << burgerCount << std::endl;
     }
void getMoney(){
     money += 50.00;
     }
class CreditCard
{
    public:
	char ch[17];
        char csv[4];
        char pin[5];
        unsigned int repNo = 0;
        
        void printRecipt(){
            while (repNo /= 10)
            repNo += 3;    
            std::time_t result = std::time(nullptr);
            std::cout << "Time & Date         " << std::asctime(std::localtime(&result));
            std::cout << "repNo:              " << std::setfill('0')<< std::setw(9) << repNo + rand() % 100 + 1 << std::endl;            
        }
        void Declined(){
             std::cout << "DECLINED" << std::endl;
        }
        void Approved(){
            std::cout << "APPROVED" << std::endl;
            printRecipt();
			itemName();
        }
       void showMoney(){
            std::cout << money << std::endl;
       }
      void buyItem(){
       money -= burger;
       std::cout << "$15.00" << std::endl;
       if (money < 0){
       money += burger;
       }
       usleep(100000);
       burgerCount++;
       showMoney();
        std::cout << "SALE: $" << 15.00 << std::endl;
            if (money < 15.00){
                Declined();
            }
            if (money >= 15.00){
                Approved();
            }
      }
       void itemName(){
         std::cout << "Burger                     x" << burgerCount << std::endl;
       }
       void getMoney(){
         money += 50.00;
       }

        void Purchase(){    
            std::cout << "SALE: $" << 15.00 << std::endl;
        }
    void EnterCC(){
            std::cout << "******|Enter the [16] Digit Creditcard Number|******" << std::endl;
             std::cin.getline(ch,sizeof(ch)); 
             std::cout << "CREDITCARD ENTERED" << std::endl;
             usleep(100000);
             std::cout << "Signalling CREDITCARD." << std::endl;
             usleep(100000);
             std::cout << "Signalling CREDITCARD.." << std::endl;
             usleep(100000);
             std::cout << "Signalling CREDITCARD..." << std::endl;
             usleep(100000);
	     for (i = 0;i < 15;i++){
	 	 if (i == 4){
                     std::cout << " ";
                 }
                 if (i == 7){
                     std::cout << " ";
                 }
                 if (i == 11){
                     std::cout << " ";
                 }
                 if (i == 15){
                     std::cout << " ";
                 }
                 usleep(100000);
                 std::cout << ch[i];
                 std::cin.clear(); 
           }
    }
	void EnterCSV(){
         std::cout << std::endl;
         std::cout << "***Enter [3] Diigit CSV Number***" << std::endl;
         std::cout << "CSV# ";
         std::cin.getline(csv,sizeof(csv));
         for (ii = 0;ii < 3;ii++) {
            std::cout << csv[ii];
            }
         std::cout << std::endl;
     	 }
void EnterCCpin(){
     std::cout << "******|Enter [4] Digit Pin Number|******" << std::endl; 
     std::cout << "PIN# " << std::endl;
     std::cin.getline(pin,sizeof(pin));
     for (iii = 0;iii < 4;iii++){
         std::cout << pin[iii];
         }
         usleep(100000);
         std::cout << std::endl;
         std::cout << "CREDITCARD PIN ENTERED" << std::endl;
    	 }
    
};
int main(void){
CreditCard *CCN = new CreditCard;

// functions in the stack.
CCN->Purchase();
CCN->EnterCC();
CCN->EnterCSV();
CCN->EnterCCpin();
CCN->buyItem();
}
