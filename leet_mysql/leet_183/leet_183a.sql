# Write your MySQL query statement below
SELECT Name as Customers 
FROM Customers 
WHERE Id NOT IN 
	(SELECT Customers.Id 
	FROM Customers 
	INNER JOIN Orders 
	ON Customers.Id = Orders.CustomerId);