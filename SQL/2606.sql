select p.id, p.name from products p
inner join categories c on c.id = p.id_categories
where c.name like 'super%';