					PETS INFOR 

1.

CREATE TABLE pets (
    petid varchar,
    name varchar,
    kind varchar,
    gender varchar,
    age int,
    ownerid varchar
);

2.

COPY pets FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/7_joining_tables/P9-Pets.csv' DELIMITER ',' CSV HEADER; 


3.

CREATE TABLE owners (
    ownerid varchar,
    name varchar,
    surname varchar,
    streetaddress varchar,
    city varchar,
    state varchar(2),
    statefull varchar,
    zipcode varchar
);


4.

COPY owners FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/7_joining_tables/P9-Owners.csv' DELIMITER ',' CSV HEADER;


5.

CREATE TABLE proceduredetails (
    proceduretype varchar,
    proceduresubcode varchar,
    description varchar,
    price float
);

6.

COPY proceduredetails FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/7_joining_tables/P9-ProceduresDetails.csv' DELIMITER ',' CSV HEADER;


7.

CREATE TABLE procedurehistory (
    petid varchar,
    proceduredate date,
    proceduretype varchar,
    proceduresubcode varchar
);


8.

COPY procedurehistory FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/7_joining_tables/P9-ProceduresHistory.csv' DELIMITER ',' CSV HEADER;


 


SPEGEETTTEEEE attempts:

-- Looking into George Mcdonald


SELECT * 
FROM pets
WHERE ownerid = '4378';

--SELECT *
--FROM owners
--WHERE ownerid = '4378' 

-- The botom is pets, looking at all male dogs, specifically AGE 12
--WHERE gender = 'male' AND kind = 'Dog' AND age = '12'