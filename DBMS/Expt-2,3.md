
# Experiment - 2 :-
## <u>Aim :-</u>
<b><i> Experiments based on commands - CREATE , ALTER , DROP , TRUNCATE </i></b>

## <u> Queries :- </u>

### Create Commands
#### QUERY:-
	A DDL command  to create a table DEPOSIT with ACTNO <varchar>, CNAME <varchar>, BNAME <varchar>, AMOUNT <decimal>, ADATE <date>
#### COMMAND:-
	create table DEPOSIT(
	    -> ACTNO VARCHAR(10),
	    -> CNAME VARCHAR(20),
	    -> BNAME VARCHAR(20),
	    -> AMOUNT NUMERIC(8,2),
	    -> ADATE DATE);
#### OUTPUT:-
	+--------+--------------+------+-----+---------+-------+
	| Field  | Type         | Null | Key | Default | Extra |
	+--------+--------------+------+-----+---------+-------+
	| ACTNO  | varchar(10)  | YES  |     | NULL    |       |
	| CNAME  | varchar(20)  | YES  |     | NULL    |       |
	| BNAME  | varchar(20)  | YES  |     | NULL    |       |
	| AMOUNT | decimal(8,2) | YES  |     | NULL    |       |
	| ADATE  | date         | YES  |     | NULL    |       |
	+--------+--------------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to create a table BRANCH with BNAME <varchar>, CITY <varchar>
#### COMMAND:-
	create table BRANCH(
	    -> BNAME VARCHAR(20),
	    -> CITY VARCHAR(20));
#### OUTPUT:-
	+-------+-------------+------+-----+---------+-------+
	| Field | Type        | Null | Key | Default | Extra |
	+-------+-------------+------+-----+---------+-------+
	| BNAME | varchar(20) | YES  |     | NULL    |       |
	| CITY  | varchar(20) | YES  |     | NULL    |       |
	+-------+-------------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to create a table CUSTOMERS with CNAME <varchar>, CITY <varchar>	
#### COMMAND:-
	create table CUSTOMERS(
	    -> CNAME VARCHAR(20),
	    -> CITY VARCHAR(20));
#### OUTPUT:-
	+-------+-------------+------+-----+---------+-------+
	| Field | Type        | Null | Key | Default | Extra |
	+-------+-------------+------+-----+---------+-------+
	| CNAME | varchar(20) | YES  |     | NULL    |       |
	| CITY  | varchar(20) | YES  |     | NULL    |       |
	+-------+-------------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to create a table BORROW with LOANNO <varchar>, CNAME <varchar>, BNAME <varchar>, AMOUNT <NUMERIC>
#### COMMAND:-
	create table BORROW(
	    -> LOANNO VARCHAR(20),
	    -> CNAME VARCHAR(20),
	    -> BNAME VARCHAR(20),
	    -> AMOUNT NUMERIC(8,2));
#### OUTPUT:-
	+--------+--------------+------+-----+---------+-------+
	| Field  | Type         | Null | Key | Default | Extra |
	+--------+--------------+------+-----+---------+-------+
	| LOANNO | varchar(20)  | YES  |     | NULL    |       |
	| CNAME  | varchar(20)  | YES  |     | NULL    |       |
	| BNAME  | varchar(20)  | YES  |     | NULL    |       |
	| AMOUNT | decimal(8,2) | YES  |     | NULL    |       |
	+--------+--------------+------+-----+---------+-------+

### Alter Commands
#### QUERY:-
	A DDL command  to alter CUSTOMERS table to add Rating<int> column
#### COMMAND:-
	ALTER TABLE CUSTOMERS ADD Rating int(5);
#### OUTPUT:-
	+--------+-------------+------+-----+---------+-------+
	| Field  | Type        | Null | Key | Default | Extra |
	+--------+-------------+------+-----+---------+-------+
	| CNAME  | varchar(20) | YES  |     | NULL    |       |
	| CITY   | varchar(20) | YES  |     | NULL    |       |
	| Rating | int(5)      | YES  |     | NULL    |       |
	+--------+-------------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to alter CUSTOMERS table to drop Rating<int> column
#### COMMAND:-
	ALTER TABLE CUSTOMERS DROP Rating;
#### OUTPUT:-
	+-------+-------------+------+-----+---------+-------+
	| Field | Type        | Null | Key | Default | Extra |
	+-------+-------------+------+-----+---------+-------+
	| CNAME | varchar(20) | YES  |     | NULL    |       |
	| CITY  | varchar(20) | YES  |     | NULL    |       |
	+-------+-------------+------+-----+---------+-------+

### Drop Commands
#### QUERY:-
	A DDL command  to create table DUMMY with DNAME <int>, DNO <int>
#### COMMAND:-
	CREATE TABLE DUMMY(
	    -> DNAME int,
	    -> DNO int);
#### OUTPUT:-
	+-------+---------+------+-----+---------+-------+
	| Field | Type    | Null | Key | Default | Extra |
	+-------+---------+------+-----+---------+-------+
	| DNAME | int(11) | YES  |     | NULL    |       |
	| DNO   | int(11) | YES  |     | NULL    |       |
	+-------+---------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to drop a table DUMMY
#### COMMAND:-
	DROP TABLE DUMMY;
#### OUTPUT:-
	ERROR 1146 (42S02): Table 'Student.DUMMY' doesn't exist

### Truncate Commands
#### QUERY:-
	A DML command  to display a table DUMMY
#### COMMAND:-
	SELECT * FROM DUMMY;
#### OUTPUT:-
	+-------+------+
	| DNAME | DNO  |
	+-------+------+
	|    10 |   15 |
	|    10 |   25 |
	+-------+------+

#### QUERY:-
	A DDL command  to truncate table DUMMY
#### COMMAND:-
	TRUNCATE TABLE DUMMY;
#### OUTPUT:-
	Empty set (0.000 sec)

# Experiment - 3
## <u> Aim :-</u>
<b><i> Apply the integrity constraints like Primary Key, Foreign Key, Check, Not Null to the tables</i></b>

## <u> Queries :-</u>
#### QUERY:-
	A DDL command  to create a table SCIENTISTS with SCIENTIST_ID <int>, SCIENTIST_NAME <varchar>
#### COMMAND:-
	CREATE TABLE SCIENTISTS(SCIENTIST_ID INT PRIMARY KEY, SCIENTIST_NAME varchar(30));
#### OUTPUT:-
	+----------------+-------------+------+-----+---------+-------+
	| Field          | Type        | Null | Key | Default | Extra |
	+----------------+-------------+------+-----+---------+-------+
	| SCIENTIST_ID   | int(11)     | NO   | PRI | NULL    |       |
	| SCIENTIST_NAME | varchar(30) | YES  |     | NULL    |       |
	+----------------+-------------+------+-----+---------+-------+

#### QUERY:-
	A DDL command  to create a table EXPT with SNO <int>, EXPT_NAME <varchar>, EXPT_DATE <date> (not null), WORKERS_NO <int> (check(WORKERS_NO < 40)), EXPT_ID <varchar> (primary key), SCIENTIST_ID <int> (foreign key to SCIENTISTS(SCIENTIST_ID))
#### COMMAND:-
	CREATE TABLE EXPT( SNO int, EXPT_NAME varchar(20), EXPT_DATE date not null, WORKERS_NO int check(WORKERS_NO < 40), EXPT_ID varchar(20) primary key,SCIENTIST_ID int, foreign key(SCIENTIST_ID) references SCIENTISTS(SCIENTIST_ID));
#### OUTPUT:-
	+--------------+-------------+------+-----+---------+-------+
	| Field        | Type        | Null | Key | Default | Extra |
	+--------------+-------------+------+-----+---------+-------+
	| SNO          | int(11)     | YES  |     | NULL    |       |
	| EXPT_NAME    | varchar(20) | YES  |     | NULL    |       |
	| EXPT_DATE    | date        | NO   |     | NULL    |       |
	| WORKERS_NO   | int(11)     | YES  |     | NULL    |       |
	| EXPT_ID      | varchar(20) | NO   | PRI | NULL    |       |
	| SCIENTIST_ID | int(11)     | YES  | MUL | NULL    |       |
	+--------------+-------------+------+-----+---------+-------+
