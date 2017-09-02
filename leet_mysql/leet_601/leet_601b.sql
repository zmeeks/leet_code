# Write your MySQL query statement below
SELECT DISTINCT s1.id, s1.date, s1.people
FROM stadium s1, stadium s2, stadium s3
WHERE s1.id != s2.id and s1.id != s3.id and s2.id != s3.id and abs(s1.id-s2.id) + abs(s2.id-s3.id) + abs(s1.id-s3.id) = 4
and s1.people >= 100 and s2.people >= 100 and s3.people >= 100
ORDER BY id ASC;
