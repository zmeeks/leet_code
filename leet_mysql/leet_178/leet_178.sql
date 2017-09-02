# Write your MySQL query statement below
SET @curRank := 0;
SELECT s.Score, x.Rank 
FROM Scores s 
INNER JOIN 
(SELECT Score, (@curRank := @curRank + 1) as Rank 
FROM 
(SELECT Score 
FROM Scores 
GROUP BY Score 
ORDER BY Score DESC)t)x 
ON s.Score = x.score 
ORDER BY Score DESC;