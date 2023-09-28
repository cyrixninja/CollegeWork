# Solutions 

### Query 5

Query 5: Display all the student IDs and faculty IDs who live in the same city.
```
SELECT s.studentID, f.factID FROM tblStudent s, tblFaculty f WHERE s.city = f.city;
```

### Query 10

Query 10: Display all the 2nd year Student Names and credits obtained by them for all the students with the 'Pass' status.

```
SELECT s.fName, s.iName, sr.creditObtained
FROM tblStudent s
JOIN tblStudentCourse sc ON s.studentID = sc.stuID
JOIN tblStudentResult sr ON sc.stuCouID = sr.stuCouID
WHERE sc.year = 2 AND sr.iscleared = 'Pass';
```

### Query 11

Query 11: Count the average years of experience for all the faculties.

```
SELECT AVG(YEAR(NOW()) - YEAR(STR_TO_DATE(joinDate, '%d-%m-%Y'))) AS AverageExperience FROM tblFaculty;
```
