# Write your MySQL query statement below
Select product_name, year, price
From Sales
LEFT JOIN Product
ON Sales.product_id=Product.product_id;