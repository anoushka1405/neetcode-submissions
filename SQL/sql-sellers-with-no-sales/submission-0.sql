-- Write your query below
SELECT s.seller_name
FROM Seller s
LEFT JOIN Orders o
    ON s.seller_id = o.seller_id
    AND o.sale_date BETWEEN '2020-01-01' AND '2020-12-31'
WHERE o.order_id IS NULL
ORDER BY s.seller_name;