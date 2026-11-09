#include <iostream>
using namespace std;

// int main(){
//     int playerHP = 100;

//     cout << "Player HP: " << playerHP << endl;
//     cout << "Memory Address: " << &playerHP << endl;

//     return 0;
// }




// int main(){
//     int playerHP = 100;
//     int* ptr = &playerHP;

//     cout << "Original HP: " << playerHP << endl;
//     cout << "Address: " << &playerHP << endl;
//     cout << "Value through pointer: " << *ptr << endl;

//     return 0;
// }




// int main(){
//     int playerHP = 100;
//     int* ptr = &playerHP;

//     cout << "Before: " << playerHP << endl;

//     *ptr = 60;

//     cout << "After: " << playerHP << endl;

//     return 0;
// }


// void takeDamage(int* hp, int damage){
//     *hp -= damage;

//     if (*hp < 0){
//         *hp = 0;
//     }
// }

// int main(){
//     int playerHP = 100;

//     cout << "Before: " << playerHP << endl;

//     takeDamage(&playerHP, 30);
//     cout << "After: " << playerHP << endl;

//     return 0;
// }




// int main(){
//     int scores[3] = {10, 20, 30};
//     int* ptr = scores;

//     for (int i = 0; i < 3; i++){
//         cout << "Score " << i + 1 << ": " << *(ptr + i) << endl;
//     }
//     return 0;
// }





// int main(){
//     int* ptr = nullptr;

//     if (ptr == nullptr){
//         cout << "Pointer is empty!" << endl;
//     }

//     return 0;
// }




// void showHP(const int* hp){
//     if (hp != nullptr){
//         cout << "player HP: " << *hp << endl;
//     }
// }

// void takeDamage(int* hp, int damage){
//     if (hp == nullptr || damage < 0){
//         return;
//     }

//     *hp -= damage;

//     if (*hp < 0){
//         *hp = 0;
//     }
// }

// void healPlayer(int* hp, int heal){
//     if (hp == nullptr || heal < 0){
//         return;
//     }
//     *hp += heal;

//     if(*hp > 100){
//         *hp = 100;
//     }
// }

// int main(){
//     int playerHP = 100;

//     showHP(&playerHP);

//     takeDamage(&playerHP, 40);
//     showHP(&playerHP);

//     healPlayer(&playerHP, 25);
//     showHP(&playerHP);

//     return 0;
// }





