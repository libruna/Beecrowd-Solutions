select prod.name from products prod
inner join providers p on id_providers = p.id
where p.name like 'P%' and prod.amount between 10 and 20; 