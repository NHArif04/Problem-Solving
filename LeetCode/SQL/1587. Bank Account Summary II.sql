SELECT u.name, SUM(t.amount) AS balance
FROM Users u
LEFT JOIN Transactions t
ON u.account = t.account
GROUP BY t.account
HAVING SUM(t.amount)>10000;