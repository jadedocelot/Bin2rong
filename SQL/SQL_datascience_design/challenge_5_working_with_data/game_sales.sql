-- CONSOLE GAMES 

CREATE TABLE console_games (
    game_rank integer,
    game_name varchar(1200),
    platform varchar(1200),
    game_year integer,
    genre varchar(20),
    publisher varchar(1200),
    na_sales float8,
    eu_sales float8,
    jp_sales float8,
    other_sales float8    
);

-- WINDOWS
COPY console_games FROM 'C:\Users\Kirill\Desktop\Databases\ConsoleGames.csv' DELIMITER ',' CSV HEADER;

-- MAC
COPY console_games FROM '/users/ilyaeremenko/Desktop/ConsoleGames.csv' DELIMITER ',' CSV HEADER;

-- Where the file is on my computer
COPY console_games FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/challenge_5_working_with_data/P9-ConsoleGames.csv' DELIMITER ',' CSV HEADER;

-------------------------------------------------
aCREATE TABLE console_dates (
    platform_name char(120),
    first_retail_availability date,
    discontinued date,
    units_sold_mill float8,
    platform_comment varchar(120)    
);

-- WINDOWS
COPY console_dates FROM 'C:\Users\Kirill\Desktop\Databases\ConsoleDates.csv' DELIMITER ',' CSV HEADER;

-- MAC 
COPY console_dates FROM '/Users/ilyaeremenko/Desktop/ConsoleDates.csv' DELIMITER ',' CSV HEADER;
 
 -- Where the file is on my computer
COPY console_dates FROM '/users/edgar/Desktop/Bin2rong/SQL/SQL_datascience_design/challenge_5_working_with_data/P9-ConsoleDates.csv' DELIMITER ',' CSV HEADER;