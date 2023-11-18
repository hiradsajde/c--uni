#include <iostream>

using namespace std;

void tax_calculator(){
    float salary , tax , salayaftertax;
    cout << "How much do you earn per year? (Rials) " ;
    cin >> salary ; 
    salayaftertax = salary;
    if(salary < 0) { 
        cout << "there is a problem , you can't enter a negative number";
    }
    if(salary < 15000){
        tax = 0;
    }
    if (salary < 230000){
        tax = salary / 10 ;
        salayaftertax -= tax;
        
    }
    if(salary < 280000){
        tax = (salary / 100) * 12 ;
        salayaftertax -= tax;
    }
    if(salary < 380000){
        tax = (salary / 100) * 15 ;
        salayaftertax -= tax;
    } 
    else {
        tax = salary / 5 ;
        salayaftertax -= tax;
    }
    cout << "salay : " << salary << " Rials" << endl;
    cout << "tax : " << (salary - salayaftertax) << " Rials" << endl;
    cout << "income : " << salayaftertax << " Rials";
}

void triangle_detector(){
    float a , b , c ; 
    cout << "enter 3 side length : " << endl;
    cin >> a >> b >> c;
    if(a*b>c && a*c>b && b*c>a){
        if(a == b == c){
            cout << "motesavi azla ast";
        } else if(a==b || b==c || a==c){
            cout << "motesavi saghein ast";
        } else {
            bool condition_one = a*a == b*b + c*c;
            bool condition_two = b*b == a*a + c*c;
            bool condition_three = c*c == b*b + a*a;
            if(condition_one || condition_two || condition_three){
                cout << "ghaem zavie ast";
            } else { 
                cout << "mokhtalef azla ast";
            }
        }
    } else{
        cout << "these sides can't be a triangle";
    }
}

void time_to_calender(){
    int num; 
    cout << "how many days since the beggining of last year? ";
    cin >> num ; 

    if(num > 0 && num < 364){
        int month = (num % 33 == 0) ? (num / 33) :(num / 33) + 1;
        int days = (num % 33 == 0) ? 33 : num % 33 ;
        cout << "Today is : " << month << "/" << days;
    } else {
        cout << "input is out of range";
    }
}
int main()
{
    int choose;
    cout << "which program do you want to run?" << endl;
    cout << "1- Tax Calculator (Question 2)" << endl;
    cout << "2- number of days to another planet calender (Question 4)" << endl;
    cout << "3- type of triangle detector (Question 6)" << endl;

    cout << "enter your decition as a number (1-3) : ";
    cin >> choose;
    switch (choose) {
        case 1 :
            tax_calculator();
            break;
        case 2 : 
            time_to_calender();
            break;
        case 3 : 
            triangle_detector();
            break;
        default : 
            cout << "out of range";
    }
}