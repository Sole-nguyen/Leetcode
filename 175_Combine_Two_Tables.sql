SELECT p.firstName, p.lastName,a.city,a.state
From Person p 
LEFT Join Address a ON a.personId = p.personId;