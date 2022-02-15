select prod.name, p.name, prod.price from products prod
inner join providers p on prod.id_providers = p.id 
inner join categories c on prod.id_categories = c.id
where price > 1000 and c.name = 'Super Luxury';