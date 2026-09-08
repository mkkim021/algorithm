-- 코드를 입력하세요 
select a.author_id,a.author_name,b.category, sum(b.total_sales) total_sales
from author a
join (
    SELECT b.book_id, b.category, b.author_id,b.price,s.sales,(b.price*s.sales)total_sales
    from book b
    join book_sales s on b.book_id = s.book_id and to_char(s.sales_date,'yyyy-mm-dd') between '2022-01-01' and '2022-01-31'
   
) b on a.author_id = b.author_id
group by a.author_id, b.category,a.author_name
order by a.author_id asc, b.category desc

