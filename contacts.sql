CREATE TABLE contacts  (
    petid varchar,
    first_name varchar,
    last_name varchar,
    title varchar,
    email int,
    company_email varchar,
    phone varchar
);


COPY company contacts FROM '/users/edgar/Desktop/Bin2rong/People.csv' DELIMITER ',' CSV HEADER; 
