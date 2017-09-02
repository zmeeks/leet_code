# Write your MySQL query statement below
SELECT d.Name as Department, e3.Name as Employee, e3.Salary as Salary 
FROM Department d 
INNER JOIN 
(SELECT e1.* FROM Employee e1 
LEFT JOIN 
(SELECT Salary, DepartmentID from Employee group by DepartmentId, Salary)e2 
ON e1.DepartmentId = e2.DepartmentId 
WHERE e1.Salary <= e2.Salary 
GROUP BY e1.Id 
HAVING COUNT(*) <= 3)e3 
ON e3.DepartmentId = d.Id

# this sol beats 98% of other submissions