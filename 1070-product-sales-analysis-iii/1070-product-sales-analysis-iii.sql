# Write your MySQL query statement below
SELECT product_id , quantity , price , year as first_year from SALES
where (product_id,year) IN
(
    SELECT product_id, MIN(Year)
    from sales
    GROUP BY product_id
)