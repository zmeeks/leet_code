# Write your MySQL query statement below
SELECT DISTINCT s1.id, s1.date, s1.people
FROM
(SELECT * FROM stadium WHERE people >= 100)s1, 
(SELECT * FROM stadium WHERE people >= 100)s2,
(SELECT * FROM stadium WHERE people >= 100)s3
WHERE (s1.id+1 = s2.id and s1.id +2 = s3.id and s1.id < s2.id and s2.id < s3.id)
OR (s2.id+1 = s1.id and s2.id +2 = s3.id and s2.id<s1.id and s1.id<s3.id)
OR (s3.id+1 = s2.id and s3.id +2 = s1.id and s3.id < s2.id and s2.id < s1.id)
ORDER BY id ASC;