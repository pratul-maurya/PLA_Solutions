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

## Data mining
In the Hogwarts University examinations conducted during the past 5 years, the toppers registration numbers were 7128, 8019, 7128, 7678 and 6567.Rachel Green is an expert in data mining and she could easily infer a pattern in the toppers registration numbers. In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. She termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a C++ program to find whether a given number is a probable topper number or not

### INPUT & OUTPUT FORMAT:
Input consists of a single integer.
The output consists of a single line. Refer to the sample output for details.

### SAMPLE INPUT & OUTPUT:
143
Yes
	 Case 1
	 Case 2
	 Case 3

## Debt Repay
Alice wanted to start a business and she was looking for a venture capitalist. Through her friend Bob, she met the owner of a construction company who is interested to invest in an emerging business. Looking at the business proposal, the owner was very much impressed with Alice's work. So he decided to invest in Alice's business and hence gave a green signal to go ahead with the project. Alice bought Rs.X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be given by Alice to the owner. The owner, impressed by proper repayment of the financed amount decides to give a special offer of 2% discount on the total interest at the end of the settlement. Find the amount given back by Alice and also find the total amount. (Note: All rupee values should be in two decimal points).

### INPUT FORMAT:
Input consists of 3 integers.
The first integer corresponds to the principal amount borrowed by Alice.
The second integer corresponds to the rate of interest
The third integer corresponds to the number of years.

### OUTPUT FORMAT:
The output consists of 4 floating point values.
The first value corresponds to the interest.
The second corresponds to the amount.
The third value corresponds to the discount.
The last value corresponds to the final settlement.
All floating point values are to be rounded off to two decimal places
### SAMPLE INPUT: 
100
1
10
### SAMPLE OUTPUT: 
10.00
110.00
0.20
109.80

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

### SAMPLE OUTPUT:
473
222
11

## Ascending Order
Klaus Mikaelson and his daughter Hope were arguing about who is the smartest person in the family. Klaus who is a world known Computer Engineer, asked Hope who has not yet completed her college to write a C++ program to sort the given array in ascending order. Can you help Hope?

### INPUT FORMAT:
Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.

### SAMPLE INPUT:
5

54
68
25
14
74

### SAMPLE OUTPUT:
Sorted array is:

14
25
54
68
74

Sum of all permutations
Given the size N of array A, followed by the line of array elements. Find the sum of all possible permutation values without duplicates.

Constraints:
1 < N < 9
0 < A[i] < 10

Example 1:
Input:
2
1 2
Output:
33
Explanation:
The possible permutations are 12 and 21. Their sum will be 33.

Example 2:
Input:
3
1 2 3
Output:
1332
Case 1
Case 2
Input (stdin)
2
1
2
Output (stdout)
33
Input (stdin)
3
1
2
3
Output (stdout)
1332

Euler's phi Algorithm
Given a number N, find the sum of its natural co-prime till N.
Example 1:
Input:
10
Output:
20
Explanation:
The co-primes of 10 are 1, 3, 7, and 9. And their sum will be 20. 
Example 2:
Input:
8
Output:
16
Explanation:
The co-primes of 8 are 1, 3, 5, and 7. And their sum will be 16.
	 Case 1
	 Case 2
Input (stdin)
10
Output (stdout)
20
Input (stdin)
8
Output (stdout)
16

Angle between hour and minute hand
Let us consider the normal wall clock we use. Write a program to calculate the smallest angle between the hour 'H' and the minute 'M' hand of a clock, for the given time. Set the precision to two decimal points. Print "Invalid Input" if the time is invalid.
Constraints:
0 < H <= 12
0 <= M < 60
Example:
Input:
3 30
Output:
75.00
	 Case 1
	 Case 2
Input (stdin)
3 30
Output (stdout)
75.00

hr hand:
12hrs = 360deg
1hr = 30 deg
60m = 30 deg
1m = 1/2 deg
min hand:
60 min = 360 deg
1min = 6 deg
time:7:30pm
Angle covered by hr hand - angle covered by min hand
7*30 + 30 *1/2 - 30*6
7*30 +30(1/2 - 6)
7*30 + 30(-11/2)
30*H - 11/2*M
Angle = 30H ~ 11/2 M
If H>M , 30H - 11/2 M
If M>H,11/2 M - 30 H



The sum of digits until single digit is obtained
Write a program to find the sum of the digits of a number until the sum is reduced to a single digit.  
Format: 
Input: The first line of input contains the number of test cases T. For each test case, the first line of input contains an integer. 
Output: The output contains a single line integer value for T test cases.  

Constraints: 1 ≤ N ≤ 105 1 ≤ T ≤ 10  

Example: 
Input: 
3 
12345 
749 
5298 
Output: 
6 
2 
6 

Explanation: 
Testcase 1: 12345 -> 1+2+3+4+5 = 15 -> 1+5 = 6. 
Testcase 2: 749 -> 7+4+9 = 20 -> 2+0 = 2. 
Testcase 3: 5298 -> 5+2+9+8 = 24 -> 2+4 = 6.  
Case 1
Case 2
Input (stdin)
3
12345
749
5298 
Output (stdout)
6
2
6

Input (stdin)
4
856
74
896
9231 
Output (stdout)
1
2
5
6 


Sum of N natural numbers
Write a program to find the sum of N natural numbers in a given range.
Format:
Input:
The input consists of two integers.
Output:
The output should be an integer.
Example:
Input:
5 10
Output:
45
Explanation:
The sum of natural numbers between 5 and 10 is 5+6+7+8+9+10 = 45.

Case 1
Case 2
Input (stdin)
5 10
Output (stdout)
45

Number of elements with odd factors in a given range
Write a program to find the number of elements with odd factors in the given range (inclusive of ranges).
For
Input:
The input consists of two integers.
Output:
The output consists of an integer.
Example:
Input:
1 100
Output:
10
Case 1
Case 2
Input (stdin)
1 100
Output (stdout)
10

Fibonacci or not
Write a program to check whether the given number is Fibonacci or not.
Example 1:
Input:
5
Output:
Yes
Example 2:
Input:
 10
Output:
No
Case 1
Case 2
Input (stdin)
5
Output (stdout)
Yes

Number of palindromes
Given the number of digits, find the number of palindrome till those numbers of digits. A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number that remains the same when its digits are reversed. Like 16461, for example, it is "symmetrical". The term palindromic is derived from palindrome, which refers to a word (such as rotor or racecar) whose spelling is unchanged when its letters are reversed. Like if the digit is 2 then the answer will be 18. The 2 digit palindromic numbers are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99. Note: Do not consider 0.

Sample Input:
1
Sample Output:
9
Sample Input:
1
Sample Output:
9
Case 1Case 2Case 3
Input (stdin)
1
Output (stdout)9
 like 1

Survive World
There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
 Where k = 2
Constraints:
N>=0
N<=100
Sample Input :
100
Sample output :
72
	 Case 1
	 Case 2
Input (stdin)
100
Output (stdout)
72
​
[13:56] trainer7@vitbhopal.ac.in
Input (stdin)
51
Output (stdout)
38
