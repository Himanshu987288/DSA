#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float marks;

public:
    void input() {
        cout << "\nEnter Student Name, Roll, Marks: ";
        cin >> name >> roll >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class BankAccount {
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!\n";
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class Demo {
    int a;

public:
    Demo() {
        a = 0;
    }

    Demo(int x) {
        a = x;
    }

    void show() {
        cout << "Value: " << a << endl;
    }
};

class Person {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

class Counter {
    static int count;

public:
    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Total Objects Created: " << count << endl;
    }
};

int Counter::count = 0;


int main() {

    
    Student s;
    s.input();
    s.display();

    
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(400);
    acc.showBalance();

    
    Demo d1;
    Demo d2(50);
    cout << "\nConstructor Overloading:\n";
    d1.show();
    d2.show();

    
    Person p;
    p.setAge(21);
    cout << "\nEncapsulation:\nAge: " << p.getAge() << endl;

    
    Counter c1, c2, c3;
    cout << "\nStatic Member:\n";
    Counter::showCount();

    return 0;
}