# Write your MySQL query statement below
SELECT DISTINCT n1.Num as ConsecutiveNums 
FROM Logs n1 
INNER JOIN 
    (SELECT nA.* FROM Logs nA 
    INNER JOIN 
    (SELECT nB.* FROM Logs nB)nC 
    ON 
    nA.Id = (nC.Id)+1 
    WHERE nA.Num = nC.Num)n2 
 ON 
 n1.Id = (n2.Id)+1 
 WHERE n1.Num = n2.Num 