select m.id, m.name from movies m
inner join prices p on m.id_prices = p.id
where value < 2.00;