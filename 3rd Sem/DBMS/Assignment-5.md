# Solutions 

### 1. Display all Student and Faculty IDs(Use Alias to display a common column name) along with their names.
```
SELECT stu.stuID AS StudentID,
fac.facID AS FacultyID,
stu.fName AS StudentFirstName,
stu.lName AS StudentLastName,
fac.fName AS FacultyFirstName,
fac.lName AS FacultyLastName
FROM tblStudent stu
JOIN tblFaculty fac ON stu.branchID = fac.deptID;
```

### 2. Display all Student Names who live in the same city where faculty named ‘Chetan K. Solanki’ lives.

```
SELECT stu.fName, stu.lName
FROM tblStudent stu
JOIN tblFaculty fac ON stu.city = fac.city
WHERE fac.fName = 'Chetan' AND fac.lName = 'Solanki';
```

### 3. Display all Subject IDs & Names for which the credit is more than that of Maths – III.

```
SELECT subjectID, subname
FROM tblSubject
WHERE credit > (SELECT credit FROM tblSubject WHERE subname = 'Maths – III');
```

### 4. Display first three Subject IDs, Names and study hours in the decreasing order of the Study Hours (Theory + Practical + Tutorial). (Top N Analysis)

```
SELECT subjectID, subname,(thHours+tuHours+prHours) AS TotalStudyHours
FROM tblSubject
ORDER BY TotalStudyHours DESC
LIMIT 3;
```

### 5. Display all the student names and their credit percentile. (Credit Percentile = (credit Obtained/Maximum Credit)*100)
```
SELECT 
    CONCAT(fName,' ',lName) AS Student_Name,
    (creditObtained/5)*100 AS Credit_Percentile
FROM tblStudent s 
JOIN tblStudentResult r ON s.StuID = r.ID;
```

### 6. Display all Student Names and their Exam Fees Submission Dates who are having their Exam Fees Submission Dates prior to that of ‘Atula Avasthi’
```
SELECT CONCAT(fName, ' ', lName) AS StudentName, ef.dateSub AS ExamFeesSubmissionDate
FROM tblStudent
JOIN tblExamFee ef ON tblStudent.stuID = ef.stuID
WHERE ef.dateSub < (SELECT ef2.dateSub FROM tblStudent s2
                    JOIN tblExamFee ef2 ON s2.stuID = ef2.stuID
                    WHERE s2.fName = 'Atula' AND s2.lName = 'Avasthi');
```
