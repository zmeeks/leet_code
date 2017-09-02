CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE K INT;
SET K = N - 1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT Salary 
      FROM Employee 
      ORDER BY Salary DESC 
      LIMIT 1 OFFSET K
  );
END