# Write your MySQL query statement below
DELETE FROM Person 
WHERE Id NOT IN 
(SELECT Id 
FROM 
(SELECT MIN(Id) as Id, Email 
FROM Person 
GROUP BY Email)t )