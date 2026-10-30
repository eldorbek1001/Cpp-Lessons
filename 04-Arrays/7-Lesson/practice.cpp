#include <iostream>
using namespace std;

// int main(){
//     int enemySCORE[5] = {50, 80, 120, 95, 200};

//     for(int i = 0; i < 5; i++){
//         cout << "Player " << i + 1 << "score: " << enemySCORE[i] << endl; 
//     }
// }



// int main(){
//     int XP[5] = {10, 20, 30, 40, 50};

//     int total_xp = 0;

//     for (int xp : XP) {
//         total_xp += xp;
//     }

//     cout << "Total XP: " << total_xp << endl;

//     return 0;
// }



// int main(){
//     int enemyHP[5] = {100, 70, 78, 90, 60};

//     for(int i = 0; i < 5; i++){
//         enemyHP[i] -= 20;
//         cout << enemyHP[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// int main(){
//     int enemyHP[5] = {100, 200, 30, 90, 130};

//     int max_hp = enemyHP[0];

//     for (int i = 1; i < 5; i++){
//         if (enemyHP[i] > max_hp){
//             max_hp = enemyHP[i];
//         }
//     }
//     cout << "Eng kuchli dushman: " << max_hp << endl;

//     return 0;
// }


// int main(){
//     int playerScore[5] = {20, 45, 75, 90, 40};

//     for(int i = 0; i < 5; i++){
//         cout << "Playre's scores: " << playerScore[i] << endl; 
//     }
// }




// int main(){
//     int XP[5] = {10, 20, 30, 40, 50};

//     int total_xp = 0;

//     for (int xp : XP) {
//         total_xp += xp;
//     }

//     cout << "Total XP: " << total_xp << endl;

//     return 0;
// }





// int main(){
//     double PlayerScores[5] = {20, 30, 40, 50, 60};
//     double total = 0.0;

//     for (int i = 0; i < 5; i++){
//         cout << i + 1 << "-o`yinchi: " << PlayerScores[i] << endl;
//         total += PlayerScores[i];
//     }

//     double midd = total / 5;

//     cout << midd << endl;
// }


// int main(){
//     int enemyHP[5] = {100, 200, 30, 90, 130};

//     int max_hp = enemyHP[0];

//     for (int i = 1; i < 5; i++){
//         if (enemyHP[i] > max_hp){
//             max_hp = enemyHP[i];
//         }
//     }
//     cout << "Srtongest enemy: " << max_hp << endl;

//     return 0;
// }


// int main(){
//     int enemyHP[5] = {100, 70, 78, 90, 60};

//     for(int i = 0; i < 5; i++){
//         enemyHP[i] -= 25;
//         cout << enemyHP[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }






// int main(){
//     int enemyHP[5] = {0, 20, 15, 97, 11};

//     int lifeEnemies = 0;

//     for(int i = 0; i < 5; i++){
//         if(enemyHP[i] > 0){
//             lifeEnemies++;
//         }
//     }
//     cout << "Alive enemies: " << lifeEnemies << endl;
//     return 0;
// }


// void attackEnemies(int hpArray[], int size, int damage){
//     for (int i = 0; i < size; i++){
//         if (hpArray[i] > 0){
//             hpArray[i] -= damage;

//             if (hpArray[i] < 0){
//                 hpArray[i] = 0;
//             }
//         }
//     }
// }


// int countAliveEnemies(int hpArray[], int size){

//     int aliveCount = 0;
//     for (int i = 0; i < size; i++){
//         if (hpArray[i] > 0){
//             aliveCount++;
//         }
//     }
//     return aliveCount;
// }

// int main(){
//     const int SIZE = 5;

//     int enemyHP[SIZE] = {10, 25, 15, 40, 5};
//     int playerDamage = 15;

//     cout << "--- BATTLE START ---" << endl;

//     attackEnemies(enemyHP, SIZE, playerDamage);

//     cout << "you allived " << playerDamage << "uifsdhf foadoh ausdhfi fhusdh!" << endl;
//     cout << "Hozirgi dushman HPsi: ";
//     for (int i = 0; i < SIZE; i++){
//         cout << enemyHP[i] << " ";
//     }
//     cout << endl;

//     int alive = countAliveEnemies(enemyHP, SIZE);

//     cout << "Qolgan dushmanlar: " << alive << endl;

//     cout << "_______________________" << endl;

//     return 0;

// }

