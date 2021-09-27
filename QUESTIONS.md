# PLA_Solutions

It consists of codes for the given questions :-

## Hop n Hop
Peter Rabbit lives in a colony. He is the only rabbit in his colony who is not able to hop. On his 5th birthday, his father rabbit gifted him a pogo stick as he could not jump like the other rabbits. He is so excited to play with the pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks. He wants to show the pogo stick to his friends and decides to go using pogo sticks. Write a program to find the number of hops needed to reach his friends' house. Assume that Peter Rabbit's house is in the location (3,4).
### INPUT FORMAT:
Input consists of two integers x,y.
The x and y correspond to x and y coordinates of his friends' house.
### OUTPUT FORMAT:
The output is an integer. It corresponds to the number of hops needs to reach his friends' house.
### SAMPLE INPUT:
5
10


## Four musketeers
Dhoni joined the group of 3 Musketeers and now their group is called four Musketeers. Meanwhile, Dhoni also moved to a new house in the same locality nearby to the other three. Currently, the houses of Sachin, Dravid and Ganguly are located in the shape of a triangle. When the three musketeers asked Dhoni about the location of his house, he said that his house is equidistant from the houses of the other 3. Can you please help them find out the location of the house? Given the 3 locations {(a1,b1), (a2,b2) and (a3,b3)} of a triangle, write a program to determine the point which is equidistant from all the 3 points.
### INPUT FORMAT:
Input consists of 6 integers.
The first integer corresponds to a1.
The second integer corresponds to b1.
The third and fourth integers correspond to a2 and b2 respectively.
The fifth and sixth integers correspond to a3 and b3 respectively.
### OUTPUT FORMAT:
The output consists of two floating point numbers which correspond to the location of the house.
### SAMPLE INPUT:
2 4 10 15 5 8
SAMPLE OUTPUT:
5.66667 9 



## Cricket
Peekay is crazy about IPL. He was watching Mumbai Indians vs. Chennai Super Kings final match. Mumbai won the toss and elected to bat first. They finished batting with a score of X. Next, Chennai started to bat and scored Y runs in N number of balls. As Peekay is very crazy, he wants to calculate the run rate and check whether there is a probability for Chennai to win or not. Help him calculate the run-rate and check the probability.
### INPUT FORMAT :
Input consists of 4 integers.
First input corresponds to the total number of balls.
Second input corresponds to the total number of runs.
Third input corresponds to the number of runs scored.
Fourth input corresponds to the number of balls bowled.
### OUTPUT FORMAT:
First output corresponds to the total number of overs.
Second output corresponds to the total number of overs finished.
Third output corresponds to the current run rate.
Fourth output corresponds to total run rate.
50 7.3 10.7 7.5
Eligible to Win
### SAMPLE INPUT:
300 375 78 45
SAMPLE OUTPUT:
50 7.3 10.7 7.5
Eligible to Win

## Treasure Hunter
Though there have been more successful pirates, Blackbeard is one of the best-known and widely-feared of his time. He commanded four ships and had a pirate army of 300 at the height of his career and defeated the famous warship, HMS “Scarborough” in sea-battle. He was known for barreling into battle clutching two swords with several knives and pistols at the ready. He captured over forty merchant ships in the Caribbean and without flinching killed many prisoners. Now, Blackbeard and his three pirates found a treasure of gold coins. Long Ben too joined them. They decided to share the treasure. Blackbeard agreed to give x% share for Long Ben. He then decided to take y% share from the remaining treasure. His other pirates will share the remaining gold coins equally. Write a program to compute their share's.
### INPUT FORMAT:
Input consists of 3 integers.
The first input corresponds to the number of gold coins in the treasure.
The second input corresponds to Ben's share percentage and the last input is Blackbeard's share percentage.
### OUTPUT FORMAT:
The output consists of three integers.
The first output integer corresponds to Long Ben's share.
The second integer corresponds to Blackbeard's share.
The last integer corresponds to other pirates share.
### SAMPLE INPUT: 
729
65
87
###SAMPLE OUTPUT:
473
222
11

## Lab Allocation - II
There are 3 labs in the Chemical department(L1, L2, and L3) with a seating capacity of x, y, and z respectively. One of the 3 labs has been allocated for FACE training. Out of the available labs(after allocating one to FACE training), write a program to find the lab which has minimal seating capacity.
### INPUT FORMAT:
Input consists of 3 integers and a string.
The first input is an integer which denotes the seating capacity of L1(x).
The second input is an integer which denotes the seating capacity of L2(y).
The third input is an integer which denotes the seating capacity of L3(z).
The fourth input is a string which denotes the lab which is allocated for FACE training.
### OUTPUT FORMAT:
Print the minimal seating capacity lab among the available labs.
Refer the sample output for formatting.
###SAMPLE INPUT:
30
40
20
L3
### SAMPLE OUTPUT:
L1

## Treasure Finder
Sansa and Daenerys are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition.There Sansa and Daenerys play a game. In this game, there are three boxes with some numbers written on the top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Sansa and Daenerys to decode the code.
### INPUT FORMAT:
Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.
### SAMPLE INPUT:
2
4
6
### SAMPLE OUTPUT:
The treasure is in the box which has number 4.
The code to open the box is 2

## Viva on odd numbers
Amy Farrah Fowler asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive odd numbers or when the student has specified a negative number. Some students didn't know the difference between odd numbers and even numbers and they made many mistakes and so it was difficult for her to maintain the scores. She asks for your help. Can you please help her by writing a program to calculate the score?
### INPUT FORMAT:
Input consists of a list of integers.
### OUTPUT FORMAT:
The output consists of a single line. The score needs to be corrected to 1 decimal place.
[For this exercise, don't worry about duplicate odd numbers. Even if the students specify the same odd number thrice, it is accepted]
### SAMPLE INPUT & OUTPUT 1:
1
3
5
3.0
### SAMPLE INPUT & OUTPUT 2:
1
2
5
6
7
2.0

## Kaprekar number
Joffrey Baratheon wanted to excel in Math. He was learning about Kaprekar number from Olenna Tyrell,his Maths teacher. She gave him a few random numbers and asked him to find whether they are Kaprekar number or not. (Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297 )Can you help Joffrey to write a C++ program to find whether the given number is a Kaprekar number or not.
### INPUT & OUTPUT FORMAT:
Input consists of a single integer.
Refer sample output for details.
### SAMPLE INPUT & OUTPUT:
9

## Collatz problem
Phoebe Buffay started working for Chandler Bing and he wanted her to write a C++ program to generate Collatz Sequence.The rules for generating Collatz sequence are: If n is even: n = n / 2 If n is odd: n = 3n + 1 For example, if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1 It has been proved for almost all integers, that the repeated application of the above rule will result in a sequence that ends in 1.
### INPUT & OUTPUT FORMAT:
The input is an integer 'n' which denotes the first term of the sequence.
As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.
