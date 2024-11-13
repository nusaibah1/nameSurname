#include <iostream>
using namespace std;
int main()
{

    string name;
    string surname;
      //prompt user to input their firstname
    cout << "Firstname: "<< name << endl;
    cin >> name;
    cout << "Lastname: "<< surname;
    cin >> surname;

    cout << "Hello " << name << " "<< surname <<"!" <<endl;

    return 0;
}
