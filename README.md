# cellphone-tower
Extra Credit Assignment- CSC3430 Algorithm Design and Analysis

## Program information:
  Let’s consider a long, quiet country road with houses scattered very
sparsely along it. (We can picture the road as a long line segment, with
an eastern endpoint and a western endpoint.) Further, let’s suppose that
despite the bucolic setting, the residents of all these houses are avid cell
phone users. You want to place cell phone base stations at certain points
along the road, so that every house is within four miles of one of the base
stations.
#### Goal:
Give an efficient algorithm that achieves this goal, using as few base
stations as possible.
#### Program Purpose:
- The c++ program will take in a text file that include the houses position within the road 
length from west to east (left to right).
- Once the file read in the program will sort all the houses in ascending order
- Loop through the all the houses in the list. When a house position is found, the program
  will calculate the phone tower position placement. This iteration will continues till
  all the houses are cover with the cellphone base tower. 

## Instructions to run the program:

- You will need CLion IDE to run the program.
- Before running the program you need to find "housePosition.txt" in the cmake-build-debug folder
- You will go into the file and add/edit the house position as desired.
- The houses positions list will looks like this: 
```
  2
  5
  10
  67
  34
  52
  68
```
- You need to run the **main.cpp** file. 
- After the program executed, it will display the minimum base tower that needed for all the resident 
  that live along the road. 
  
 #### Time Complexity:
 -  This program time complexity is O(n^2) because it uses selection sort to sort the house positions.
 #### Video Link for the program demo:
 https://youtu.be/NjD76hYwK-M
 
