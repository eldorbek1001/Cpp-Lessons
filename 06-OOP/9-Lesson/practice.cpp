#include <iostream>
#include <string>
using namespace std;


// class Car{
// public:
//     string brend;
//     string model;
//     int year;
// };

// int main(){
//     Car car1;

//     car1.brend = "BMW";
//     car1.model = "M3";
//     car1.year = 1986;

//     cout << "Car Brand: " << car1.brend << endl;
//     cout << "Car Model: " << car1.model << endl;
//     cout << "Car Year: " << car1.year << endl;
// }






// class Player{
// public:
//     string name;
//     int level;
//     int hp;

//     Player(string name, int level, int hp){
//         this->name = name;
//         this->level = level;
//         this->hp = hp;
//     }
//     void showInfo(){
//         cout << "Name: " << name << endl;
//         cout << "Level: " << level << endl;
//         cout << "HP: " << hp << endl;
//     }
// };


// int main(){
//     Player player1("Aragorn", 10, 100);

//     player1.showInfo();

//     return 0;
// }






// class Counter{
// private:
//     int count;

// public:

//     Counter() {
//         count = 0;
//     }

//     void increase(){
//         count++;
//     }
//     void decrease(){
//         if(count > 0){
//             count--;
//         }
//     }

//     int getCount(){
//         return count;
//     }
// };
// int main(){
//     Counter c;

//     c.increase();
//     c.increase();
//     c.increase();
//     c.increase();

//     cout << "Hozirgi qiymat: " << c.getCount() << endl;

//     c.decrease();
//     c.decrease();
//     c.decrease();
//     cout << "Oxirgi qiymat: " << c.getCount() << endl;

//     return 0;

// }






// class Enemy{
// private:
//     int count;

// public:
//     Enemy(){
//         count = 100;
//     }

//     void takeDamage(){
//         if(count > 0){
//             count--;
//         }
//     }
    
//     int enemyDamage(){
//         return count;
//     }
// };

// int main(){
//     Enemy c;

//     c.takeDamage();
//     c.takeDamage();
//     c.takeDamage();

//     cout << "Enemy HP: " << c.enemyDamage() << endl;

//     return 0;
// }




// class Player{
// private:
//     int XP;
//     int level;

// public:
//     Player(){
//         XP = 0;
//         level = 1;
//     }

//     void addXP(int amount){
//         XP += amount;

//         while (XP >= 100){
//             level++;
//             XP -= 100;
//         }
//     }

//     void displayStatus(){
//         cout << "Player level: " << level << "XP: " << XP << "/100" << endl;
//     }
// };

// int main(){
//     Player p1;
//     p1.displayStatus();

//     p1.addXP(60);
//     p1.displayStatus();

//     p1.addXP(75);
//     p1.displayStatus();

//     p1.addXP(220);
//     p1.displayStatus();

//     return 0;
// }






// class Inventory{
// private:
//     string items[5];
//     int count;

// public:
//     Inventory(){
//         count = 0;
//     }

//     void addItem(string itemName) {
//         if (count < 5) {
//             items[count] = itemName;
//             count++;
//             cout << "'" << itemName << "' inventarga qo'shildi." << endl;
//         } else {
//             cout << "Xatolik: Inventar to'lgan! '" << itemName << "' qo'shilmadi." << endl;
//         }
//     }

//     void showItems() {
//         cout << "\n--- Inventar ro'yxati (" << count << "/5) ---" << endl;
//         if (count == 0) {
//             cout << "Inventar hozircha bo'sh." << endl;
//             return;
//         }

//         for (int i = 0; i < count; i++) {
//             cout << i + 1 << ". " << items[i] << endl;
//         }
//         cout << "-------------------------------" << endl;
//     }
// };

// int main(){
//     Inventory bag;

//     bag.addItem("Qilich");
//     bag.addItem("Qalqon");
//     bag.addItem("Jon eleksiri");
//     bag.addItem("Oltin kalit");
//     bag.addItem("Xarita");

//     bag.addItem("Kamalak");

//     bag.showItems();

//     return 0;
// }






// class Enemy {
// private:
//     string name;
//     int hp;
//     int damage;
//     int xpReward;

// public:
//     Enemy(string enemyName, int enemyHp, int enemyDamage, int reward) {
//         name = enemyName;
//         hp = enemyHp;
//         damage = enemyDamage;
//         xpReward = reward;
//     }

//     void takeDamage(int amount) {
//         hp -= amount;
//         if (hp < 0) {
//             hp = 0;
//         }
//     }

//     bool isAlive() {
//         return hp > 0;
//     }

//     int getDamage() {
//         return damage;
//     }

//     int getXpReward() {
//         return xpReward;
//     }

//     string getName() {
//         return name;
//     }

//     int getHp() {
//         return hp;
//     }
// };

// class Player {
// private:
//     string name;
//     int hp;
//     int damage;
//     int xp;

// public:
//     Player(string playerName, int playerHp, int playerDamage) {
//         name = playerName;
//         hp = playerHp;
//         damage = playerDamage;
//         xp = 0;
//     }

//     void takeDamage(int amount) {
//         hp -= amount;
//         if (hp < 0) {
//             hp = 0;
//         }
//     }

//     void attack(Enemy &enemy) {
//         cout << name << " -> " << enemy.getName() << " ga " << damage << " zarar yetkazdi." << endl;
//         enemy.takeDamage(damage);
//     }

//     void addXP(int amount) {
//         xp += amount;
//     }

//     bool isAlive() {
//         return hp > 0;
//     }

//     int getDamage() {
//         return damage;
//     }

//     string getName() {
//         return name;
//     }

//     void showStatus() {
//         cout << "\n=== YAKUNIY HOLAT ===" << endl;
//         cout << "O'yinchi: " << name << endl;
//         cout << "Qolgan HP: " << hp << endl;
//         cout << "To'plangan XP: " << xp << endl;
//         cout << "=====================" << endl;
//     }
// };

// int main() {
//     Player hero("Asadbek", 100, 25);
//     Enemy monster("Goblin", 60, 15, 50);

//     cout << "Jang boshlandi: " << hero.getName() << " vs " << monster.getName() << "\n" << endl;

//     while (hero.isAlive() && monster.isAlive()) {
//         hero.attack(monster);

//         if (!monster.isAlive()) {
//             cout << monster.getName() << " mag'lub bo'ldi!" << endl;
//             hero.addXP(monster.getXpReward());
//             break;
//         }

//         cout << monster.getName() << " -> " << hero.getName() << " ga " << monster.getDamage() << " zarar yetkazdi." << endl;
//         hero.takeDamage(monster.getDamage());

//         if (!hero.isAlive()) {
//             cout << hero.getName() << " mag'lub bo'ldi!" << endl;
//             break;
//         }
//     }

//     hero.showStatus();

//     return 0;
// }

