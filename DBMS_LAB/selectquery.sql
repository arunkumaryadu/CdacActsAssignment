
/* show even id row   */
select distinct city from station where id%2=0;

/* Average Population of Each Continent */

select COUNTRY.Continent,round(avg(city.population)-0.5,0) from country join city where CITY.CountryCode=COUNTRY.Code group by Continent;


/* Write a query that prints a list of employee names (i.e.: the name attribute) from the Employee table in alphabetical order.*/
select name from employee order by 1;

/* Query a count of the number of cities in CITY having a Population larger than .*/

select count(population) from city where population>100000;

/* Query the total population of all cities in CITY where District is California.  */

select sum(population) from city where District = 'California';

/* Query the average population of all cities in CITY where District is California.  */
select avg(population) from city where District = 'California';

/* Query the average population for all cities in CITY, rounded down to the nearest integer.*/
select round(avg(population)-0.5,0) from city;

/* Query the sum of the populations for all Japanese cities in CITY. The COUNTRYCODE for Japan is JPN. */
select sum(population) from CITY where COUNTRYCODE='JPN';


/* Weather Observation Station 4 */
select ((select count(*) from station)-(select count(distinct city) from station)) ;
                                        
                                      /* Weather Observation Station 5 */

select CITY, length(CITY)from station order by length(CITY), city limit 1;
select CITY, length(CITY)from station order by length(CITY) desc, city limit 1; `
