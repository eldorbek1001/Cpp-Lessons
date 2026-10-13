#include <iostream>
#include <string>
using namespace std;

// 1-masala: O'zing haqida
void task1() {
    int main(){

    string name;
    cout << "Enter your name: ";
    cin >> name;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    string country;
    cout << "Enter your country: ";
    cin >> country;

    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Country : " << country << endl;

    return 0; 
}

}

// 2-masala: Oddiy kalkulyator
void task2() {
    int main(){
    int firstNumber, secondNumber;

    cout << "Enter First Number: ";
    cin >> firstNumber;

    cout << "Enter Second Number: ";
    cin >> secondNumber;

    cout << "Sum : " << firstNumber + secondNumber << endl;
    cout << "Difference : " << firstNumber - secondNumber << endl;


    return 0;
}

}

// 3-masala: Game Character
void task3() {
    int main(){

    string character;
    int hp, level;

    cout << "Enter your game character: ";
    cin >> character;

    cout << "Enter your HP : ";
    cin >> hp;

    cout << "Enter your level : ";
    cin >> level;

    cout << character << "|" << hp << "|" << level << endl;

    return 0;

}

}

// 4-masala: To'g'ri to'rtburchak
void task4() {
    int main(){
    int a, b;
    cout << "Enter Wight : ";
    cin >> a;

    cout << "Enter Height : ";
    cin >> b;

    int sum = a * b;

    cout << "Area : " << sum << endl;

    return 0;
}

}

// 5-masala: Student Scores
void task5() {
    int main() {
    int a, b, c;

    cout << "Enter Math ball : ";
    cin >> a;

    cout << "Enter English ball : ";
    cin >> b;

    cout << "Enter Programming ball : ";
    cin >> c;

    int average = (a + b + c) / 3;
    cout << "Average : " << average << endl;

    return 0;
}

}

int main() {
    task1();
    cout << endl;

    task2();
    cout << endl;

    task3();
    cout << endl;

    task4();
    cout << endl;

    task5();

    return 0;
}
