Problem Description  
Mr. Robinson has a pet monkey named Durto. On this day, the two of them were walking along the country road, and suddenly found a small note on the roadside sign: "Welcome to taste my peanuts for free! - Bear".
Mr. Robinson and a lot of people are very happy, because peanuts are their favorite. Behind the signboard, there is really a piece of peanut field on the roadside, and the peanut plants are neatly arranged in a rectangular grid (Figure 1). A lot of experience can tell at a glance how much peanuts are in each peanut plant. In order to train a lot of arithmetic, Mr. Robinson said: "You first find the plant with the most peanuts, pick the peanuts; then find the most peanuts in the remaining plants, pick the peanuts; and so on. , but you must return to the roadside within my limited time.  
![imahe](https://github.com/reignsocket/Peanut-problem/blob/master/peanuts.png)

We assume that one can do one of the following four things per unit time:  
1) Jump from the roadside to a peanut plant closest to the roadside (ie the first row);
2) Jump from one plant to another plant adjacent to it, left and right;  
3) picking peanuts under a plant;  
4) Jump from the edge of the peanut plant closest to the roadside (ie the first row).  
Now given the size of a peanut field and the distribution of peanuts, how many peanuts can you pick up in a limited time? Note that only some of the plants have peanuts underneath, assuming that the number of peanuts under these plants varies. For example, in the peanut field shown in Figure 2, only the plants located at (2, 5), (3, 7), (4, 2), (5, 4) have peanuts, the number is 13, 7 , 15, 9. Along the illustrated route, a maximum of 37 peanuts can be harvested in 21 units.
  
Input data  
The first line of input consists of three integers, M, N and K, separated by spaces; the size of the peanut field is M * N (1
<= M, N <= 20), the time limit for multi-poly peanuts is K (0 <= K <= 1000) unit time. The next M lines, each line consisting of N non-negative integers, also separated by spaces; the jth integer Pij of the i + 1 line (0 <= Pij <= 500) indicates the peanut field plants (i, j) The number of peanuts under the ground, 0 means no peanuts under the plant.  
  
Output requirements  
The output consists of one line. This line contains only one integer, that is, the maximum number of peanuts that can be picked up in a limited time.  
  
Input sample  
6 7 21  
0 0 0 0 0 0 0  
0 0 0 0 13 0 0  
0 0 0 0 0 0 7  
0 15 0 0 0 0 0  
0 0 0 9 0 0 0  
0 0 0 0 0 0 0  
  
Output sample  
37  
  
Problem solving  
It is unrealistic to try to find the law and get a formula that uses the peanut matrix as an independent variable to solve this problem. The result can only be known. That is to go into the peanuts, every time you want to pick a peanut, calculate it, the rest of the time, enough to go to the peanut, pick, and walk back to the road from the peanut. If the time is enough, go to picking; if the time is not enough, the picking activity ends here.
