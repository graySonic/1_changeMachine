/* 
Проект "Разменный автомат"
Программа просит пользователя ввести число пенни
и на основании этого числа программа выдаст
количество долларов, четвертаков, монет по
10 центов, 5 центов и пеннии
Пример: 385 пенни это 3 доллара, 3 четвертака и 1 десятчик  
*/

#include <iostream>
using namespace std;

int main()
{
    int total, dollars, quarters, dimes, nickels, pennies;
    cout << "Enter penny ammount: ";
    cin >> total;
    cout << "Your banalce: " << total << endl;
    dollars = total / 100;
    quarters = (total % 100) / 25;
    dimes = ((total % 100) % 25) / 10;
    nickels = (((total % 100) % 25) % 10) / 5;
    pennies = ((((total % 100) % 25) % 10) % 5);
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    return 0;
}
