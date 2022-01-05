select prod.name, p.name from products prod
inner join providers p on prod.id_providers = p.id
where prod.id_categories = 6;