# Write your MySQL query statement below
SELECT Email FROM Person GROUP BY Email having count(Email) > 1;