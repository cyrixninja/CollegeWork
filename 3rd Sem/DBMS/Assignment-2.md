## Solutions 

### tblStudent
```
INSERT INTO tblStudent (stuID, fName, mName, lName,address,area, city, state, country, birthdate, gender, regno, branchID, admyear,emailid) VALUES ('001', 'Parth', 'Mohan', 'Patel', 'L-98 Area XYZ','Adajan','Surat', 'Gujarat', 'India', '1991-06-25', 'Male', '101256', 'CO', '2006','parth@gmail.com'),
('002', 'Mayur', 'Sahil', 'Rathod', 'U-64 Area ABC W','City Centre','Baroda', 'Gujarat', 'India', '1990-08-24', 'Male', '101289', 'CO', '2006','mayur@gmail.com'),
('003', 'Ronak', 'Ramesh', 'Panchal','O-878 ABCD','City Hub', 'Pune', 'Maharashtra', 'India', '1990-04-11', 'Male', '205168', 'CI', '2005','ronak@gmail.com'),
('004', 'Chirag', 'Hasmukh', 'Mor','I-908 Main Society','Riverfront', 'Ahmedabad', 'Gujarat', 'India', '1991-08-15', 'Male', '200589', 'ME', '2005','chirag@gmail.com'),
('005', 'Prachi', 'Divesh', 'Dhimmar','B 604 Area 64','Thane', 'Mumbai', 'Maharashtra', 'India', '1989-07-14', 'Female', '105456', 'EC', '2004','prachi@gmail.com'),
('006', 'Hetvi', 'Rahul', 'Kumar','L-538 QYW','City Centre', 'Baroda', 'Gujarat', 'India', '1989-08-18', 'Female', '104565', 'EC', '2004','hetvi@gmail.com'),
('007', 'Vipul', 'Mahesh', 'Patil','P64 Area 2','Mango Place', 'Nasik', 'Maharashtra', 'India', '1988-08-15', 'Male', '200554', 'ME', '2005','vipul@gmail.com'),
('008', 'Vikas', 'Narottam', 'Ojha','OP 987 ABC Road','Fort Area', 'Rajkot', 'Gujarat', 'India', '1989-12-21', 'Male', '200458', 'EL', '2005','vikas@gmail.com'),
('009', 'Atula', 'Anil', 'Avasthi','U 98 FG Road','Hanuman Mandir Area', 'Bhavnagar', 'Gujarat', 'India', '1990-06-05', 'Female', '101054', 'CO', '2006','atula@gmail.com'),
('010', 'Mayuri', 'Rajnish', 'Ravat','MN 64 Rander Road','Rander', 'Surat', 'Gujarat', 'India', '1989-02-28', 'Female', '201024', 'EC', '2004','mayuri@gmail.com');
```

### tblBranch
```
INSERT INTO tblBranch (branchID, branchName, building, other) VALUES('CO', 'Computer', 'D1', 'First building after Admin. Building'),
('EC', 'Electronics & Communication', 'D2', 'Next to D1'),
('EL', 'Electrical', 'D3', 'Opposite Site Office'),
('ME', 'Mechanical', 'D7', 'Next to D6'),
('CI', 'Civil', 'D6', 'Building, next to Canteen'),
('AP', 'Humanities', 'D7', 'Applied Science Department');
```

### tblSubject
```
INSERT INTO tblSubject (subjectID, subName, thHours, tuHours, prHours, credit) VALUES ('ss101', 'DBMS', 3, 0, 2, 3),
('ss201', 'Communication System', 3, 1, 2, 4),
('ss202', 'Digital Electronics', 3, 1, 2, 4),
('ss301', 'Electrical Circuit Theory', 3, 0, 0, 2),
('ss401', 'Engineering Mechanics', 2, 1, 2, 3),
('ss701', 'Maths – III', 3, 0, 0, 2),
('ss601', 'Surveying & Levelling', 2, 1, 1, 3),
('Ss702', 'Engineering Chemistry', 2, 0, 2, 2);
```

### tblFaculty
```
INSERT INTO tblFaculty (facID, fName, mName,lName,address,area, city, state, country,pincode,phoneNo,emailID, joinDate, gender, qualification, designation, deptID, addDuties) VALUES ('f101', 'Chetan', 'K', 'Solanki','Gandhi Road','Adajan', 'Surat', 'Gujarat', 'India','395001','7031234567','chetan@gmail.com','2004-07-21', 'M', 'BE(Computer)', 'Lecturer', 'CO', 'Proxy Administrator'),
('f302', 'Milind',NULL, 'Trivedi','Main Street','Vasna Road', 'Baroda', 'Gujarat', 'India','395002','7599876543','milind@gmail.com','2005-11-22', 'M', 'BE(Electrical)', 'Lecturer', 'EL', 'Embedded Lab In Charge'),
('f203', 'Vijayendra', 'A', 'Desai','Park Avenue','Vesu', 'Surat', 'Gujarat', 'India','395003','7774567890','vijayendra@gmail.com','2005-01-25', 'M', 'ME(EC)', 'Lecturer', 'EC', 'T & P(EC) In Charge'),
('f705', 'Kalpesh', 'D', 'Mania','Market Street','Jubilee Garden', 'Rajkot', 'Gujarat', 'India','395004','7312345678','kalpesh@gmail.com','2002-03-02', 'M', 'ME(Mechanical)', 'Lecturer', 'ME', 'Examination Coordinator'),
('f801', 'Mitesh',NULL, 'Joshi','Hill Road','Varachha', 'Surat', 'Gujarat', 'India','395005','7448901234','mitesh@gmail.com','2000-04-30', 'M', 'MSc(Maths)', 'Lecturer', 'AP', 'Sports Committee In Charge'),
('f811', 'Deepa',NULL, 'Kapoor','Botanical Garden Road','Piplod', 'Surat', 'Gujarat', 'India','395006','7983456789','deepa@gmail.com','1999-05-06', 'F', 'PhD, MSc(Physics)', 'Assistant Professor', 'AP', 'Physics Lab In Charge'),
('f605', 'Arun',NULL, 'Bharoniya','City Light Road','Palanpur', 'Surat', 'Gujarat', 'India','395007','7866789012','arun@gmail.com','2000-10-11', 'M', 'ME(Civil)', 'Lecturer', 'CI', 'Main Lab In Charge');
```

### tblCourse
```
INSERT INTO tblCourse (courseID, subjectID, facID, semester, branchID) VALUES ('c001', 'ss101', 'f101', 7, 'CO'),
('c002', 'ss201', 'f203', 4, 'EC'),
('c003', 'ss202', 'f203', 4, 'EC'),
('c004', 'ss301', 'f302', 5, 'EL'),
('c005', 'ss401', 'f705', 2, 'ME'),
('c006', 'ss701', 'f801', 4, 'AP'),
('c007', 'ss601', 'f605', 1, 'CI'),
('c008', 'ss702', 'f811', 1, 'AP');
```

### tblStudentCourse

```
INSERT INTO tblStudentCourse (stuCouID, stuID, courseID, month, year) VALUES ('Sc101', '001', 'c001', 'July', '2009'),
('Sc202', '002', 'c002', 'January', '2007'),
('Sc203', '003', 'c003', 'January', '2007'),
('Sc304', '004', 'c004', 'July', '2007'),
('Sc705', '005', 'c005', 'January', '2006'),
('Sc606', '006', 'c006', 'January', '2006'),
('Sc817', '007', 'c007', 'July', '2005'),
('Sc807', '008', 'c008', 'July', '2005'),
('Sc710', '009', 'c005', 'January', '2007'),
('Sc205', '010', 'c003', 'January', '2006');
```

### tblStudentResult
```
INSERT INTO tblStudentResult (ID, stuCouID, creditObtained, isCleared, yearApp) VALUES ('1', 'Sc101', 2, 'Y', 2009),
('2', 'Sc202', 3, 'Y', 2007),
('3', 'Sc203', 1, 'N', 2007),
('4', 'Sc304', 1, 'Y', 2008),
('5', 'Sc705', 1, 'N', 2006),
('6', 'Sc606', 2, 'Y', 2006),
('7', 'Sc817', 1, 'N', 2005),
('8', 'Sc807', 2, 'Y', 2006),
('9', 'Sc710', 1, 'N', 2007),
('10', 'Sc205', 3, 'Y', 2006);

```

### tblOneTimeFees
```
INSERT INTO tblOneTimeFees (ID, stuID, Particular, Amount, dateSub, isRefundable) VALUES ('Of001', '001', 'Library+Security Deposit', 2500, '2006-06-15', 'Y'),
('Of002', '002', 'Library+Security Deposit', 2500, '2006-07-12', 'Y'),
('Of003', '003', 'Library+Security Deposit', 2500, '2005-06-15', 'Y'),
('Of004', '004', 'Library+Security Deposit', 2500, '2005-06-15', 'Y'),
('Of005', '005', 'Library+Security Deposit', 2500, '2004-07-12', 'Y'),
('Of006', '006', 'Library+Security Deposit', 2500, '2004-07-12', 'Y'),
('Of007', '007', 'Library+Security Deposit', 2500, '2005-06-15', 'Y'),
('Of008', '008', 'Library+Security Deposit', 2500, '2005-06-15', 'Y'),
('Of009', '009', 'Library+Security Deposit', 2500, '2006-06-15', 'Y'),
('Of010', '010', 'Library+Security Deposit', 2500, '2004-07-12', 'Y');
```

### tblTuitionFees
```
INSERT INTO tblTuitionFees (ID, stuID, semester, Amount, dateSub) VALUES ('tf001', '001', 7, 20000, '2009-07-01'),
('tf002', '002', 4, 20000, '2007-01-01'),
('tf003', '003', 4, 20000, '2007-01-01'),
('tf004', '004', 5, 20000, '2007-07-01'),
('tf005', '005', 2, 20000, '2006-01-01'),
('tf006', '006', 4, 20000, '2006-01-01'),
('tf007', '007', 1, 20000, '2005-07-01'),
('tf008', '008', 1, 20000, '2005-07-01'),
('tf009', '009', 2, 20000, '2007-01-01'),
('tf010', '010', 4, 20000, '2006-01-01');

```

### tblExamFee
```
INSERT INTO tblExamFee (ID, stuID, couID, Amount, dateSub) VALUES ('ef001', '001', 'c001', 200, '2009-07-01'),
('ef002', '002', 'c002', 200, '2007-01-01'),
('ef003', '003', 'c003', 200, '2007-01-01'),
('ef004', '004', 'c004', 200, '2008-07-01'),
('ef005', '005', 'c005', 200, '2006-01-01'),
('ef006', '006', 'c006', 200, '2006-01-01'),
('ef007', '007', 'c007', 200, '2005-07-01'),
('ef008', '008', 'C008', 200, '2006-07-01'),
('ef009', '009', 'C005', 200, '2007-01-01'),
('ef010', '010', 'C003', 200, '2006-01-01');
```
