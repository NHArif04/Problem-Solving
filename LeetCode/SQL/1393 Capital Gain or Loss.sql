SELECT stock_name, SUM(IF(operation = 'buy',-price,price)) AS capital_gain_loss
FROM Stocks
GROUP BY stock_name
ORDER BY stock_name;