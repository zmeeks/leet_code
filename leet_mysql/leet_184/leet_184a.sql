# Write your MySQL query statement below
SELECT d.name as Department, z.Employee as Employee, z.Salary as Salary 
FROM Department d 
INNER JOIN 
(SELECT e.Salary as Salary, t.name as Employee, e.Id as Id 
FROM Employee t 
INNER JOIN
(SELECT max(Salary) as Salary, DepartmentId as Id 
FROM Employee 
GROUP BY DepartmentId)e 
ON t.DepartmentID = e.Id and t.Salary = e.Salary)z
ON d.Id = z.Id;