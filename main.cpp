#include <iostream>
#include <vector>
#include <fstream>
using namespace std;



vector<int> sortHouse(vector<int> houses);
void placeCellPhoneTower(const vector<int>&houses);

int main() {


    vector<int> houses = {};

    ifstream myfile("housePosition.txt");
    assert(myfile.is_open());
    int temp = -1;
    while(true){
        myfile >> temp;
        houses.push_back(temp);
        if (myfile.eof()) {
            myfile.close();
            break;
        }
    }

    houses = sortHouse(houses);
    placeCellPhoneTower(houses);


    return 0;
}

void placeCellPhoneTower(const vector<int>& houses){
        int cellTowerNum = 0;
        int nextUncoveredHouse  = 0;
        int cellCoverage = 0;
        //first house on sorted house list
        for(int house : houses){
            if (house > cellCoverage) {
                //place a tower at house.position + 4
                //remove house in range (house.position, house.position + 8)
                cellCoverage = house + 8;
                cellTowerNum++;
            }
        }
        cout << "Cell Tower Count: " << cellTowerNum << endl;
    }




vector<int> sortHouse(vector<int> houses){
    int temp = 0;
    for(int i = 0; i < houses.size(); i++){
        for (int j=0; j < houses.size() - 1; j++){
            if(houses[j] > houses[i]){
                temp = houses[i];
                houses[i] = houses[j];
                houses[j] = temp;
            }
        }
        for (int z = 0; z < houses.size(); z++) {
            cout << houses[z] << " ";
        }
        cout << endl;
    }
    return houses;
}


