# Write your MySQL query statement below
UPDATE salary
SET sex = (case when sex = 'm' then 'f'
                when sex = 'f' then 'm'
          end);