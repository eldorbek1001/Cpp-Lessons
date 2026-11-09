#include <iostream>
using namespace std;

// int main(){
//     int age = 18;
//     cout << "Qiymati: " << age << endl;
//     cout << "Adrress: " << &age << endl;
//     return 0;
// }



// int main(){
//     int score = 250;

//     int* ptr = &score;

//     cout << "Pointer ichidagi manzili: " << ptr << endl;
//     cout << "*ptr orqali score qiymati: " << *ptr << endl;

//     return 0 ;
// }



// int main(){
//     int palyerHP = 100;

//     cout << "Eski qiymat: " << palyerHP << endl;

//     int* ptr = &palyerHP;

//     *ptr = 75;

//     cout << "Yangi qiymat: " << palyerHP << endl;

//     return 0;

// }


// void swapNumbers(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int x = 5;
//     int y = 10;

//     cout << "Alamashtirishdan oldin: x = " << x << ", y = " << y << endl;

//     swapNumbers(&x, &y);

//     cout << "Almashtirishdan keyin: x = " << x << ", y = " << y << endl;

//     return 0;
// }




// void takeDamage(int* hp, int damage){
//     if(hp == nullptr || damage < 0){
//         return;
//     }
//     *hp -= damage;

//     if (*hp < 0){
//         *hp = 0;
//     }
// }

// int main(){
//     int player_hp = 100;
//     takeDamage(&player_hp, 14);
//     cout << "qolgan HP: " << player_hp << endl;

//     takeDamage(&player_hp, 90);
//     cout << "Qolgan HP (o'limdan keyin): " << player_hp << endl;

//     return 0;
// }





// int main(){
//     int xp_massiv[5];
//     int yigindi = 0;

//     cout << "5 ta o'yinchining XP qiymatlarini kiriting: \n";
//     for (int i = 0; i < 5; i++){
//         cout << i + 1 << "-o'yinchi XP: ";
//         cin >> xp_massiv[i];
//     }

//     int* ptr = xp_massiv;

//     for (int i = 0; i < 5; i++){
//         yigindi += *ptr;
//         ptr++;
//     }

//     cout << "\nBarcha XP lar yig`indisi: " << yigindi << endl;

//     return 0;
// }






// #include <iostream>
// using namespace std;

// struct Player {
//     int hp = 100;
//     int xp = 0; 
// };

// void takeDamage(Player* player, int damage) {
//     if (damage < 0) {
//         cout << "Xatolik: Manfiy damage kiritish mumkin emas!\n";
//         return;
//     }
//     player->hp -= damage;
//     if (player->hp < 0) {
//         player->hp = 0;
//     }
//     cout << damage << " damage olindi. Joriy HP: " << player->hp << "\n";
// }

// void healPlayer(Player* player, int heal) {
//     if (heal < 0) {
//         cout << "Xatolik: Manfiy heal kiritish mumkin emas!\n";
//         return;
//     }
//     if (player->hp == 0) {
//         cout << "O'yinchi mag'lub bo'lgan, uni davolab bo'lmaydi!\n";
//         return;
//     }
//     player->hp += heal;
//     if (player->hp > 100) {
//         player->hp = 100;
//     }
//     cout << heal << " HP tiklandi. Joriy HP: " << player->hp << "\n";
// }

// void addXP(Player* player, int xp_amount) {
//     if (xp_amount < 0) {
//         cout << "Xatolik: Manfiy XP kiritish mumkin emas!\n";
//         return;
//     }
//     player->xp += xp_amount;
//     cout << xp_amount << " XP qo'shildi. Joriy XP: " << player->xp << "\n";
// }

// int main() {
//     Player myPlayer;
    
//     Player* pPtr = &myPlayer;

//     cout << "=== RPG Player Manager ishga tushdi ===\n";
//     cout << "Boshlang'ich holat -> HP: " << pPtr->hp << ", XP: " << pPtr->xp << "\n\n";

//     takeDamage(pPtr, 30);
//     takeDamage(pPtr, -15);
//     takeDamage(pPtr, 80);  

//     cout << "\n";

//     myPlayer.hp = 50;
//     healPlayer(pPtr, 20);
//     healPlayer(pPtr, 60);  
//     healPlayer(pPtr, -5);

//     cout << "\n";

//     addXP(pPtr, 150);
//     addXP(pPtr, -50);

//     cout << "\n=== Yakuniy natija ===\n";
//     cout << "Yakuniy HP: " << pPtr->hp << "\n";
//     cout << "Yakuniy XP: " << pPtr->xp << "\n";

//     return 0;
// }
