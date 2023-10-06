# Solutions 

### 1. Select first names & last names of all the students, along with aliases.
```
SELECT 
    fName AS First_Name, 
    lName AS Last_Name, 
    CONCAT(fName, ', ', lName) AS Full_Name 
FROM tblStudent;
```

### 2. Display the city names of all the students.

```
SELECT DISTINCT city AS City_Name
FROM tblStudent;
```

### 3.Display the names and birth dates of students whose names start with 'M' or 'P'.

```
SELECT 
    CONCAT(fName, ' ', lName) AS Full_Name, 
    birthdate AS Birthdate 
FROM tblStudent
WHERE fName LIKE 'M%' OR fName LIKE 'P%';

```

### 4. Display the student IDs of students from 'Maharashtra'.

```
SELECT stuID 
FROM tblStudent
WHERE state = 'Maharashtra';

```

### 5.Display the first and last names of students aged 20 or older.
```
SELECT 
    fName AS First_Name, 
    lName AS Last_Name 
FROM tblStudent
WHERE TIMESTAMPDIFF(YEAR, STR_TO_DATE(birthdate, '%Y-%m-%d'), CURDATE()) >= 20;
```

### 6.Display male student first names, last names, and year of admission from 'Surat'.
```
SELECT 
    fName AS First_Name, 
    lName AS Last_Name, 
    admyear AS Admission_Year
FROM tblStudent
WHERE gender = 'Male' AND city = 'Surat';
```

### 7. Display the student IDs and branch names of all the students.
```
SELECT 
    stuID AS Student_ID, 
    branchName AS Branch_Name
FROM tblStudent
JOIN tblBranch ON tblStudent.branchID = tblBranch.branchID;
```
### 8. Display the first and last names of all the students who belong to D1 building.
```
SELECT 
    fName AS First_Name, 
    lName AS Last_Name
FROM tblStudent
JOIN tblBranch ON tblStudent.branchID = tblBranch.branchID
WHERE tblBranch.building = 'D1';
```
### 9.  Display all the student IDs and registration numbers that are registered for more than 4 years.
```
SELECT stuID, regno, admyear
FROM tblStudent
WHERE YEAR(CURDATE()) - admyear > 4;
```
### 10. Display the entire faculty first and last names that belong to D1 building.
```
SELECT 
    fName AS First_Name, 
    lName AS Last_Name
FROM tblFaculty
JOIN tblBranch ON tblFaculty.deptID = tblBranch.branchID
WHERE tblBranch.building = 'D1';
```
### 11. Display all the student IDs and cities in the descending order of their year of admission.
```
SELECT 
    stuID AS Student_ID, 
    city AS City_Name
FROM tblStudent
ORDER BY admyear DESC;
```
