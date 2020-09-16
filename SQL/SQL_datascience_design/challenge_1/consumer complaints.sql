CREATE TABLE consumer_complaints (
    date_received varchar,
    product_name varchar,
    sub_product varchar,
    issue varchar,
    sub_issue varchar,
    consumer_complaint_narrative varchar,
    company_public_response varchar,
    company varchar,
    state_name varchar,
    zip_code varchar,
    tags varchar,
    consumer_consent_provided varchar,
    submitted_via varchar,
    date_sent varchar,
    company_response_to_consumer varchar,
    timely_response varchar,
    consumer_disputed varchar,
    complaint_id integer
);

-- WINDOWS
COPY consumer_complaints FROM 'C:\Users\Kirill\Desktop\Databases\ConsumerComplaints.csv' DELIMITER ',' CSV HEADER;

-- MAC
COPY consumer_complaints FROM '/users/ilyaeremenko/Desktop/ConsumerComplaints.csv' DELIMITER ',' CSV HEADER;


-- My Computer
COPY consumer_complaints FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/challenge_1/ConsumerComplaints.csv' DELIMITER ',' CSV HEADER; 

-- GRANT SELECT ON consumer_complaints TO PUBLIC;
GRANT SELECT ON consumer_complaints TO PUBLIC;

GRANT SELECT ON /users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/challenge_1/ConsumerComplaints.csv TO PUBLIC;

COPY my_table FROM 'c:\downloads\file.csv' DELIMITERS ',' CSV QUOTE '''';

-- This will show us that the table was filled
SELECT *
FROM consumer_complaints 


-- The Following will pull the listed columns:

SELECT sub_product,issue,company FROM consumer_complaints;