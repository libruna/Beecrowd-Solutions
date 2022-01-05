select c.name from customers c
inner join legal_person lp
on lp.id_customers = c.id;