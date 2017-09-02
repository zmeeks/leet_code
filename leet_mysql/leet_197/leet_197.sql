# Write your MySQL query statement below
SELECT w2.Id as Id 
FROM Weather w1, Weather w2 
WHERE DATEDIFF(w2.Date, w1.Date) = 1 AND w1.Temperature < w2.Temperature;