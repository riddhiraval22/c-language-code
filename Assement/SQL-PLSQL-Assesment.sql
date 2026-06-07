CREATE DATABASE NobelDB;
USE NobelDB;

CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(50),
    winner VARCHAR(100),
    country VARCHAR(50),
    category VARCHAR(50)
);



INSERT INTO Nobel_win VALUES
(1970, 'Physics', 'Hannes Alfven', 'Sweden', 'Scientist'),
(1970, 'Chemistry', 'Luis Federico Leloir', 'Argentina', 'Scientist'),
(1970, 'Medicine', 'Ulf von Euler', 'Sweden', 'Scientist'),
(1970, 'Literature', 'Aleksandr Solzhenitsyn', 'Russia', 'Author'),
(1970, 'Economics', 'Paul Samuelson', 'USA', 'Economist'),
(1965, 'Chemistry', 'Robert Burns Woodward', 'USA', 'Scientist'),
(1968, 'Chemistry', 'Lars Onsager', 'Norway', 'Scientist'),
(1972, 'Chemistry', 'Christian B. Anfinsen', 'USA', 'Scientist'),
(1975, 'Chemistry', 'John Cornforth', 'Australia', 'Scientist'),
(1902, 'Physics', 'Louis de Broglie', 'France', 'Scientist'),
(1960, 'Peace', 'Louis Smith', 'UK', 'Humanitarian');

SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;

SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
  AND year BETWEEN 1965 AND 1975;

SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';

SELECT *
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, winner ASC;

SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY
    CASE
        WHEN subject IN ('Chemistry', 'Economics') THEN 1
        ELSE 0
    END,
    subject ASC;
