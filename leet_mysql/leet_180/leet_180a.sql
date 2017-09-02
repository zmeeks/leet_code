# Write your MySQL query statement below
SELECT DISTINCT n1.Num as ConsecutiveNums 
FROM Logs n1, Logs n2, Logs n3 
WHERE n1.Id + 1 = n2.Id AND n1.Id + 2 = n3.Id And n1.Num = n2.Num AND n2.Num = n3.Num; 