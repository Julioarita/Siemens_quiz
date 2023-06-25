/*****************************************************************************************
Julio Arita 24/06/2023

Use SQlite as interpreter of commands.

In this particular problem I wasn't given with any constraints so I decided to use `UNION`
which pull out all distinct values from both tables.

There would another way to perform this task. If we consider that is asked to retain distinct
names for each animal especie, we can perform it in another way. 

******************************************************************************************/

-- THIS IS THE SOLUTION 
SELECT DOGS.NAME FROM DOGS 
UNION 
SELECT CATS.NAME FROM CATS 






/*************************************************************/
/* This will retrieve distinct names for each animal especie */
/* Although this would lead to two separate statements       */
/*************************************************************/

SELECT DISTINCT DOGS.NAME 
FROM DOGS

SELECT DISTINCT CATS.NAME
FROM CATS

/************************************************************/ 
