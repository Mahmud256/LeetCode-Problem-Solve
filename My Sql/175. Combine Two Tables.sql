SELECT person.firstName, person.lastName, address.City, address.State
FROM person
LEFT JOIN address ON person.personID = address.personID