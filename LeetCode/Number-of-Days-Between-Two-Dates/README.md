# Number of Days Between Two Dates

Write a program to count the number of days between two dates.

The two dates are given as strings, their format is YYYY-MM-DD as shown in the examples.

 

Example 1:

Input: date1 = "2019-06-29", date2 = "2019-06-30"
Output: 1
Example 2:

Input: date1 = "2020-01-15", date2 = "2019-12-31"
Output: 15
 

Constraints:

The given dates are valid dates between the years 1971 and 2100.

Accepted
55.9K
Submissions
110.7K
Acceptance Rate
50.5%
Topics
Math
String
Companies
Hint 1
Create a function f(date) that counts the number of days from 1900-01-01 to date. How can we calculate the answer ?
Hint 2
The answer is just |f(date1) - f(date2)|.
Hint 3
How to construct f(date) ?
Hint 4
For each year from 1900 to year - 1 sum up 365 or 366 in case of leap years. Then sum up for each month the number of days, consider the case when the current year is leap, finally sum up the days.
Similar Questions
Count Days Spent Together
Easy
