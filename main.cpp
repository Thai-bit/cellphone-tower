/*
 *                      Program: Base Tower efficient Algorithm
 *                      Purpose: Implementation for the greedy algorithm
 *                      Author:  Boonthai Yan
 *                      Date: March 03 2021
 *                      Version: 1.0
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <cassert>



//declaration for sort function
std::vector<int> sortHouse(std::vector<int> houses);
//declaration for calculate the cellphone tower function
void placeCellPhoneTower(const std::vector<int>&houses);

int main() {

    std::vector<int> houses;
    int temp = -1;
    // read in the houses position from a file
    std::ifstream myFile("housePosition.txt");
    assert(myFile.is_open());

    while(true){
        myFile >> temp;
        houses.push_back(temp);
        if (myFile.eof()){
            myFile.close();
            break;
        }
    }
    //sort the house in ascending order
    houses = sortHouse(houses);
    //calculate the minimum base towers need to cover all houses
    placeCellPhoneTower(houses);

    return 0;
}

/**
 * This function will go through the houses position in the list
 * Find the first house on the list
 * put a base station to cover the house position
 * go to the next house and need a base tower coverage
 * @param houses
 */
void placeCellPhoneTower(const std::vector<int>& houses){
        int cellTowerNum = 0;
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
        std::cout << "The minimum cellphone base use: " << cellTowerNum << std::endl;
    }



 /**
  * This function use to sort the house list if the house is not
  * sorted yet.
  * The house will sort in ascending order
  * @param houses
  * @return sorted houses list
  */
std::vector<int> sortHouse(std::vector<int> houses){
    int temp = 0;
    for(int i = 0; i < houses.size(); i++){
        for (int j=0; j < houses.size() - 1; j++){
            if(houses[j] > houses[i]){
                temp = houses[i];
                houses[i] = houses[j];
                houses[j] = temp;
            }
        }
    }
    return houses;
}


