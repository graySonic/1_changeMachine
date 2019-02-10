/* Проект "Разменный автомат"
 * Программа просит пользователя ввести число пенни
 * и на основании этого числа программа выдаст
 * количество долларов, четвертаков, монет по
 * 10 центов, 5 центов и пеннии
 * 100 пенни - 1 доллар; 25 пенни - 1 четвертак;
 * 10 пенни - монета 10; 5 пенни - монета 5;
 */

#include <iostream>
using namespace std;

int main()
{
    int total, dollars, quarters, dimes, nickels, pennies; //1 доллар - 100 пени, 1 четвертак - 25 пени, 1 десятчик - 10 пени, 1 никель - 5 пени, 1 пени - 1 пени
    cout << "Enter ammount peni: ";
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