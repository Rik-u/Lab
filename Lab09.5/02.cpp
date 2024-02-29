#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char name_buffer[50];
    string name;
    float total_salary = 0, salary, sale;
    
    getline(cin, name);
    cin >> salary;

    salary *= 12;

    for (int i = 12; i > 0; i--) {
        cin >> sale;
        total_salary += sale*0.15;
    }
    total_salary += salary;

    sprintf(name_buffer, "%s %.2f", name.c_str(), total_salary);

    cout << name_buffer << endl;

    return 0;
}