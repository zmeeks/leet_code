# Write your MySQL query statement below
SELECT d.Name as Department, e2.Name as Employee, e2.Salary as Salary 
FROM Department d 
INNER JOIN Employee e2
ON d.Id = e2.DepartmentId
INNER JOIN
(SELECT max(e1.Salary) as mS, e1.DepartmentId
FROM Employee e1
GROUP BY e1.DepartmentId)t
ON e2.DepartmentId = t.DepartmentId
WHERE e2.Salary = t.mS