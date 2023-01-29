#Method 1

SELECT employee_id,
IF (employee_id%2=0 OR name LIKE 'M%', 0, salary) AS bonus
FROM Employees 
ORDER BY employee_id


#Method 2

 SELECT employee_id ,
 IF(employee_id % 2 = 1 AND name NOT LIKE 'M%',salary,0) AS bonus 
 FROM Employees 
 ORDER BY employee_id