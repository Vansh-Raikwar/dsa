# Write your MySQL query statement below
SELECT name AS Customers from Customers WHERE Id NOT IN (SELECT customerId FROM Orders)