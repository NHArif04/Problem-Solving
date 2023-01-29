SELECT name AS 'Customers' FROM Customers
where Customers.id not in (select customerid from orders)