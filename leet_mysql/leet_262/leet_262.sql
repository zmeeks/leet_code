# Write your MySQL query statement below
SELECT t.Request_at as Day, ROUND((1-SUM(t.Status = 'completed')/COUNT(*)),2) as "Cancellation Rate"
FROM Trips t 
INNER JOIN 
(SELECT * FROM Users)u 
ON t.Client_Id = u.Users_Id 
WHERE 0 <= DATEDIFF('2013-10-03', t.Request_at) 
AND DATEDIFF('2013-10-03', t.Request_at) <=2
AND u.Banned = 'No'
GROUP BY t.Request_at
