select prod.name, p.name, c.name from products prod
inner join providers p on prod.id_providers = p.id
inner join categories c on prod.id_categories = c.id
where c.name = 'Imported' and p.name = 'Sansul SA';