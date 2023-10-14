# Solutions 

### 1. Display the total number of students and the department name for every department.
```
SELECT b.branchName AS Department, COUNT(s.stuID) AS TotalStudents
FROM tblBranch b
LEFT JOIN tblStudent s ON b.branchID = s.branchID
GROUP BY b.branchName;
```

### 2. Find and display the branch name with the maximum students enrolled to it.

```
SELECT branchName
FROM (
    SELECT b.branchName, COUNT(s.stuID) AS TotalStudents
    FROM tblBranch b
    LEFT JOIN tblStudent s ON b.branchID = s.branchID
    GROUP BY b.branchName
    ORDER BY TotalStudents DESC
    LIMIT 1
) AS max_branch;
```

### 3. Display the entire student first and last names for which the faculty is ‘Chetan Solanki’.

```
SELECT CONCAT(s.fName, ' ', s.lName) AS StudentName
FROM tblStudent s
JOIN tblCourse c ON s.branchID = c.branchID
JOIN tblFaculty f ON c.facID = f.facID
WHERE f.fName = 'Chetan' AND f.lName = 'Solanki';
```

### 4. Display the subject name and faculty name of branch ‘EC’.

```
SELECT s.subname AS SubjectName, CONCAT(f.fName, ' ', f.lName) AS FacultyName
FROM tblCourse c
INNER JOIN tblSubject s ON c.subjectID = s.subjectID
INNER JOIN tblFaculty f ON c.facID = f.facID
WHERE c.branchID = 'EC';
```

### 5. Display all the student IDs and faculty IDs who live in the same city.
```
SELECT s.stuID AS StudentID, f.facID AS FacultyID
FROM tblStudent s
JOIN tblFaculty f ON s.city = f.city;
```

### 6. Display the faculty ID and name for the faculty who has joined most recently.
```
SELECT facID, CONCAT(fName, ' ', lName) AS FacultyName
FROM tblFaculty
ORDER BY STR_TO_DATE(joinDate, '%Y-%m-%d') DESC
LIMIT 1;
```

### 7. Display the Subject Name and Semester No. for all the subjects up to 2nd year.
```
SELECT s.subName AS SubjectName, c.semester AS SemesterNo
FROM tblSubject s
JOIN tblCourse c ON s.subjectID = c.subjectID
WHERE c.semester <= 2;
```
### 8. Display One Time Fees’ ID, Tuition fees’ ID and Exam fees’ ID for all the students who are in 1st year(1st and 2nd sem).
```
SELECT otf.ID AS OneTimeFeesID, ttf.ID AS TuitionFeesID, ef.ID AS ExamFeesID
FROM tblStudentCourse sc
JOIN tblOneTimeFees otf ON sc.stuID = otf.stuID
JOIN tblTuitionFees ttf ON sc.stuID = ttf.stuID
JOIN tblExamFee ef ON sc.stuID = ef.stuID
JOIN tblCourse c ON sc.courseID = c.courseID
WHERE c.semester IN (1, 2);
```
### 9. Display total fees for all the ‘Computer’ branch students.
```
SELECT s.stuID, s.fName, s.lName, s.branchID, SUM(otf.amount + tf.amount + ef.amount) AS total_fees
FROM tblStudent AS s
LEFT JOIN tblOneTimeFees AS otf ON s.stuID = otf.stuID
LEFT JOIN tblTuitionFees AS tf ON s.stuID = tf.stuID
LEFT JOIN tblExamFee AS ef ON s.stuID = ef.stuID
WHERE s.branchID = 'CO'
GROUP BY s.stuID
ORDER BY s.stuID;
```
### 10. Display all the 2nd year Student Names and credits obtained by them for all the students with the ‘Pass’ status.
```
SELECT CONCAT(s.fName, ' ', s.lName) AS StudentName, sr.creditObtained
FROM tblStudent s
JOIN tblStudentCourse sc ON s.stuID = sc.stuID
JOIN tblStudentResult sr ON sc.stuCouID = sr.stuCouID
JOIN tblCourse c ON sc.courseID = c.courseID
WHERE c.semester = 4 AND sr.isCleared = 'Y';
```
### 11. Count the average years of experience for all the faculties.
```
SELECT AVG(YEAR(CURDATE()) - YEAR(STR_TO_DATE(joinDate, '%Y-%m-%d'))) AS AverageYearsOfExperience
FROM tblFaculty;
```
