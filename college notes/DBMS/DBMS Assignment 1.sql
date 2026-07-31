Enter password: *************
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 12
Server version: 8.0.46 MySQL Community Server - GPL

Copyright (c) 2000, 2026, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> create database hospital;
ERROR 1007 (HY000): Can't create database 'hospital'; database exists
mysql> use hospital;
Database changed
mysql> CREATE TABLE patient (
    ->     Patient_ID INT PRIMARY KEY,
    ->     Name VARCHAR(100),
    ->     Age INT,
    ->     Gender VARCHAR(10),
    ->     Contact_Number VARCHAR(15),
    ->     Address VARCHAR(100)
    -> );
Query OK, 0 rows affected (0.07 sec)

mysql> CREATE TABLE doctor (
    ->     Doctor_ID INT PRIMARY KEY,
    ->     Name VARCHAR(100),
    ->     Specialization VARCHAR(50),
    ->     Treatment_Cost DECIMAL(10,2),
    ->     Doctor_Department VARCHAR(50),
    ->     Contact_Number VARCHAR(15)
    -> );
Query OK, 0 rows affected (0.02 sec)

mysql> insert into patient values(101,'Rahul Sharma',25,'Male','9876543210','Pune'),
    -> (102,'Priya Patil',32,'Female','9876501234','Mumbai'),
    -> (103,'Amit Kumar',45,'Male','9876512345','Kolhapur'),
    -> (104,'Sneha Joshi',29,'Female','9876523456','Satara'),
    -> (105,'Rohan Desai',38,'Male','9876534567','Sangli'),
    -> (106,'Anjali Kulkarni',27,'Female','9876545678','Nashik'),
    -> (107,'Vikram Singh',50,'Male','9876556789','Nagpur'),
    -> (108,'Neha Verma',34,'Female','9876567890','Solapur'),
    -> (109,'Karan Mehta',41,'Male','9876578901','Aurangabad'),
    -> (110,'Pooja More',31,'Female','9876589012','Ahmednagar');
Query OK, 10 rows affected (0.02 sec)
Records: 10  Duplicates: 0  Warnings: 0

mysql> INSERT INTO doctor
    -> VALUES
    -> (201,'Dr. Sharma','Cardiology',5000.00,'Heart','9876600001'),
    -> (202,'Dr. Mehta','Orthopedic',3500.00,'Bone','9876600002'),
    -> (203,'Dr. Patil','Neurology',6500.00,'Brain','9876600003'),
    -> (204,'Dr. Joshi','Dermatology',2500.00,'Skin','9876600004'),
    -> (205,'Dr. Kulkarni','Cardiology',5500.00,'Heart','9876600005'),
    -> (206,'Dr. Deshmukh','Pediatrics',3000.00,'Children','9876600006'),
    -> (207,'Dr. Shah','ENT',2800.00,'ENT','9876600007'),
    -> (208,'Dr. Reddy','General Medicine',2000.00,'Medicine','9876600008');
Query OK, 8 rows affected (0.01 sec)
Records: 8  Duplicates: 0  Warnings: 0

mysql> select * from patient;
+------------+-----------------+------+--------+----------------+------------+
| Patient_ID | Name            | Age  | Gender | Contact_Number | Address    |
+------------+-----------------+------+--------+----------------+------------+
|        101 | Rahul Sharma    |   25 | Male   | 9876543210     | Pune       |
|        102 | Priya Patil     |   32 | Female | 9876501234     | Mumbai     |
|        103 | Amit Kumar      |   45 | Male   | 9876512345     | Kolhapur   |
|        104 | Sneha Joshi     |   29 | Female | 9876523456     | Satara     |
|        105 | Rohan Desai     |   38 | Male   | 9876534567     | Sangli     |
|        106 | Anjali Kulkarni |   27 | Female | 9876545678     | Nashik     |
|        107 | Vikram Singh    |   50 | Male   | 9876556789     | Nagpur     |
|        108 | Neha Verma      |   34 | Female | 9876567890     | Solapur    |
|        109 | Karan Mehta     |   41 | Male   | 9876578901     | Aurangabad |
|        110 | Pooja More      |   31 | Female | 9876589012     | Ahmednagar |
+------------+-----------------+------+--------+----------------+------------+
10 rows in set (0.01 sec)

mysql> select * from doctor;
+-----------+--------------+------------------+----------------+-------------------+----------------+
| Doctor_ID | Name         | Specialization   | Treatment_Cost | Doctor_Department | Contact_Number |
+-----------+--------------+------------------+----------------+-------------------+----------------+
|       201 | Dr. Sharma   | Cardiology       |        5000.00 | Heart             | 9876600001     |
|       202 | Dr. Mehta    | Orthopedic       |        3500.00 | Bone              | 9876600002     |
|       203 | Dr. Patil    | Neurology        |        6500.00 | Brain             | 9876600003     |
|       204 | Dr. Joshi    | Dermatology      |        2500.00 | Skin              | 9876600004     |
|       205 | Dr. Kulkarni | Cardiology       |        5500.00 | Heart             | 9876600005     |
|       206 | Dr. Deshmukh | Pediatrics       |        3000.00 | Children          | 9876600006     |
|       207 | Dr. Shah     | ENT              |        2800.00 | ENT               | 9876600007     |
|       208 | Dr. Reddy    | General Medicine |        2000.00 | Medicine          | 9876600008     |
+-----------+--------------+------------------+----------------+-------------------+----------------+
8 rows in set (0.00 sec)

mysql> delete from patient where Patient_ID="109";
Query OK, 1 row affected (0.02 sec)

mysql>
