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
  
Implementation skills  
  
It is natural to store information about peanuts in a two-dimensional array. However, using aField[0][0] or aField[1][1]
Corresponding to the upper left corner of the peanut ground, it is worth thinking about. Since it takes 1 unit time from the ground to the road, the coordinates in the title all start from 1, so if aField[1][1] corresponds to the upper left corner of the peanut ground, then from aField[i][j] The time required to return to the road is i, which is more convenient and natural, and is not easy to make mistakes. It's not that C/C++'s array subscripts start at 0. When we use arrays, we start with elements with subscript 0.
  
  
common problem  
Question 1: This topic should be read carefully when reading the question. Some students did not see that they could only take the most of the remaining peanuts at a time.Big, but hope to find a combination that can get the most peanuts within the specified time, turning the title into another question.  
Question 2: Some students did not read the condition that “the number of peanuts without two peanut plants is the same”, so the topic
It's complicated.  
Question 3: This topic is based on the assumption that monkeys will not return to the road during the process of taking peanuts. Some students are thinking  
Is it possible to return to the road in the middle, because the problem does not say that it takes time to move on the road, so it is possible to come out and pick up more peanuts.
