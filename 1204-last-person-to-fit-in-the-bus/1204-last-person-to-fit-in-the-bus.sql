with cte1 as
 (select * , sum(weight) over(order by turn Rows between unbounded preceding and current row) as running_sum from queue )
 , cte2 as
 (select person_name , running_sum , dense_rank() over(order by running_sum desc) as rn from cte1 
 where running_sum<=1000
 )
 select person_name from cte2 
 where rn=1;
