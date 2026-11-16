#include <iostream>
#include <string>
using namespace std;



// class Player{
// public:
//     string name;
//     int hp;
//     int level;
// };


// int main(){
//     Player player1;

//     player1.name = "Knight";
//     player1.hp = 100;
//     player1.level = 10;

//     cout << "Player: " << player1.name << endl;
//     cout << "HP: " << player1.hp << endl;
//     cout << "Level: " << player1.level << endl;

//     return 0;
// }





// class Player{
// public:
//     string name;
//     int hp;

//     void showInfo(){
//         cout << name << endl;
//         cout << hp << end;
//     }
// };





// class Player{
// public:
//     string name;
//     int hp;

//     void showInfo(){
//         cout << "Player: " << name << endl;
//         cout << "HP: " << hp << endl;
//     }
// };

// int main(){
//     Player player1;

//     player1.name = "Knight";
//     player1.hp = 100;

//     player1.showInfo();

//     return 0;
// }






// class Player {
// private:
//     int hp = 100;

// public:
//     void setHP(int newHP){
//         if(newHP >=0 && newHP <= 100){
//             hp = newHP;
//         }
//     }

//     int getHP() const{
//         return hp;
//     }
// };

// int main(){
//     Player player1;

//     player1.setHP(75);

//     cout << "HP: " << player1.getHP() << endl;

//     player1.setHP(-500);

//     cout << "HP: " << player1.getHP() << endl;

//     return 0;
// }





// class Player{
// public:
//     string name;
//     int hp;

//     Player(string playerName, int playerHP){
//         name = playerName;
//         hp = playerHP;
//     }

//     void showInfo() const{
//         cout << "Player: " << name << endl;
//         cout << "HP: " << hp << endl;
//     }
// };

// int main(){
//     Player player1("Knight", 100);
//     Player player2("Archer", 80);


//     player1.showInfo();
//     player2.showInfo();

//     return 0;
// }






// class Enemy {
// public:
//     int hp = 100;

//     void showHP() const{
//         cout << "Enemy HP: " << hp << endl;
//     }
// };

// int main(){
//     Enemy enemy1;

//     Enemy* ptr = &enemy1;

//     ptr->showHP();

//     return 0;
// }







// class Player {
// private:
//     string name;
//     int hp;
//     int xp;

// public:
//     Player(string playerName) {
//         name = playerName;
//         hp = 100;
//         xp = 0;
//     }

//     void takeDamage(int damage) {
//         if (damage <= 0) {
//             return;
//         }

//         hp -= damage;

//         if (hp < 0) {
//             hp = 0;
//         }
//     }

//     void heal(int amount) {
//         if (amount <= 0) {
//             return;
//         }

//         hp += amount;

//         if (hp > 100) {
//             hp = 100;
//         }
//     }

//     void addXP(int amount) {
//         if (amount > 0) {
//             xp += amount;
//         }
//     }

//     bool isAlive() const {
//         return hp > 0;
//     }

//     void showStatus() const {
//         cout << "Player: " << name << endl;
//         cout << "HP: " << hp << "/100" << endl;
//         cout << "XP: " << xp << endl;
//         cout << "Alive: " << boolalpha << isAlive() << endl;
//     }
// };

// int main() {
//     Player hero("Knight");

//     hero.takeDamage(35);
//     hero.heal(20);
//     hero.addXP(50);

//     hero.showStatus();

//     return 0;
// }