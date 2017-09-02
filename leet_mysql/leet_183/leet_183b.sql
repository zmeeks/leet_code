# Write your MySQL query statement below
SELECT Customers.Name as Customers 
FROM Customers 
LEFT JOIN ORDERS 
ON Customers.Id = Orders.CustomerId 
WHERE Orders.Id IS NULL;