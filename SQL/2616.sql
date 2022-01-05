select c.id, c.name from customers c
left join locations l on l.id_customers = c.id
where l.id_customers is null;