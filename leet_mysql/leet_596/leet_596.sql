# Write your MySQL query statement below
SELECT class 
FROM 
(SELECT DISTINCT student, class FROM courses)t 
GROUP BY class 
HAVING COUNT(class) > 4;