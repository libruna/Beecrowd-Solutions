select c.name, r.rentals_date from customers c
inner join rentals r on c.id = r.id_customers
where r.rentals_date between '2016-09-01' and '2016-09-30';