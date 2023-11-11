#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    int numberRequestet = 0;
    cin >> numberRequestet;

    if(numberRequestet == 0 || numberRequestet > 10000){
        return 0;
    }
    int daysNeeded = numberRequestet;
    int printers = 1;
    for(int i = 0; i < numberRequestet; i++){
        if((numberRequestet / printers) < daysNeeded){
            if(numberRequestet % printers == 0){
                daysNeeded = numberRequestet / printers;
            }else{
                int daysExtra = numberRequestet % printers;
                daysNeeded = (numberRequestet+daysExtra) / (printers);
            }
        }else{
            printers++;
            daysNeeded++;
        }
    }
    cout << daysNeeded << endl;


}