select c.name, sum(p.amount) from categories c
inner join products p on p.id_categories = c.id
group by c.name;