## Solutions 

```
CREATE TABLE tblStudent (
    stuID int(3) PRIMARY KEY,
    fName varchar(30) NOT NULL,
    mName char(20),
    lName char(10),
    address varchar(100),
    area varchar(20),
    city varchar(30),
    state varchar(20),
    country varchar(20),
    pincode bigint,
    phoneno bigint(10),
    birthdate varchar(20),
    gender varchar(30),
    regno bigint,
    branchID varchar(20),
    admyear bigint,
    emailid varchar(30)
);
```

```
CREATE TABLE tblBranch (
    branchID varchar(20) PRIMARY KEY,
    branchName varchar(50) NOT NULL,
    building varchar(30),
    other varchar(100));
```
```
CREATE TABLE tblSubject (
    subjectID varchar(30) PRIMARY KEY,
    subname varchar(30) NOT NULL,
    thHours varchar(20),
    tuHours varchar(20),
    prHours varchar(20),
    credit varchar(20)
);
```
```
CREATE TABLE tblFaculty (
    facID varchar(30) PRIMARY KEY,
    fName varchar(30),
    mName varchar(15),
    lName varchar(15),
    address varchar(70),
    area varchar(15),
    city varchar(10),
    state varchar(20),
    country varchar(10),
    pincode bigint,
    phoneNo bigint(10),
    emailID varchar(20),
    joinDate varchar(20),
    gender varchar(20) NOT NULL,
    qualification varchar(20),
    designation varchar(30),
    deptID varchar(20) NOT NULL,
    addDuties varchar(50)
);
```
```
CREATE TABLE tblCourse (
    courseID varchar(20) PRIMARY KEY,
    subjectID varchar(20) NOT NULL,
    facID varchar(20) NOT NULL,
    semester varchar(10) NOT NULL,
    branchID varchar(20)
);
```
```
CREATE TABLE tblStudentCourse (
    stuCouID varchar(20) PRIMARY KEY,
    stuID varchar(20) NOT NULL,
    courseID varchar(20) NOT NULL,
    month char(15),
    year int(4)
);
```
```
CREATE TABLE tblStudentResult (
    ID varchar(3),
    stuCouID varchar(5) NOT NULL,
    creditObtained int(2) NOT NULL,
    isCleared char(1),
    yearApp int(4)
);
```
```
CREATE TABLE tblOneTimeFees (
    ID varchar(8),
    stuID int(3) NOT NULL,
    particular varchar(50),
    amount bigint(6),
    dateSub varchar(10),
    isRefundable varchar(8)
);
```
```
CREATE TABLE tblTuitionFees (
    ID varchar(8) PRIMARY KEY,
    stuID varchar(20) NOT NULL,
    semester int(1),
    amount bigint(6),
    dateSub varchar(15)
);

```
```
CREATE TABLE tblExamFee (
    ID varchar(8) PRIMARY KEY,
    stuID int(3) NOT NULL,
    couID varchar(10) NOT NULL,
    amount bigint(6),
    dateSub varchar(15)
);
```
