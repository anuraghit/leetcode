# Write your MySQL query statement below
SELECT
customers.name as 'Customers'
from customers
where customers.id NOT IN
(
    SELECT customerid from orders
);