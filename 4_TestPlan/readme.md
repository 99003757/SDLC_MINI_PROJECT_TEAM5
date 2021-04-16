# TEST PLAN:

**Test Plan For Matrix Operation**

| Test ID | Requirement | Expected Output |
| --- | --- | --- |
| LLR8 | R1!=R2 &amp;C1!=C2 | Invalid |
| LLR8 | R1=R2 &amp;C1=C2 | Do Matrix Addition |
| LLR9 | R1!=R2 &amp;C1!=C2 | Invalid |
| LLR9 | R1=R2 &amp;C1=C2 | Do Matrix Subtraction |
| LLR10 | R2!=C1 | Invalid |
| LLR10 | R2=C1 | Do Matrix Multiplication |


| Test ID | Requirement | Expected Output |Type of test case|
| --- | --- | --- |---|
| HLR1 | Selection of Operation | Selecting Available Operations  | Requirement based|
| HLR2 | Accuracy | Result Precision | Requirement based|
| HLR3 | Number of digits allowed to enter | Valid Input | Requirement based|





**Test Plan For Trigonomteric Operation**


| Test ID | Requirement | Expected Output |Type of test case|
| --- | --- | --- |--- |
| LLR1 | sin(30)  | -0.988032 | Positive Test case|
| LLR2 | cos(30)| 0.1542  | Positive Test case|
| LLR3 | tan(30) | -6.405331 | Positive Test case|
| LLR4 | cot(30)| -0.15612 | Positive Test case|
| LLR5 | sec(30) | 6.4829| Positive Test case|
| LLR6 | cosec(30) | -1.012113 | Positive Test case|
| LLR7 | sin(60)  | -0.304811 | Positive Test case|
| LLR8 | cos(60)| -0.9524 | Positive Test case|
| LLR9 | tan(60) | 0.32004  | Positive Test case|
| LLR10 | cot(60)| 3.124606 | Positive Test case|
| LLR11 | sec(60) | -1.04996 | Positive Test case|
| LLR12 | cosec(60) | -3.280726 | Positive Test case|


**For Conversion Operation**
![test_conversion](https://user-images.githubusercontent.com/78851073/107909107-85b8ad80-6f7d-11eb-9510-4614e0bb6d80.png)

**For Basic Operation**



| TEST CASE ID | DESCRIPTION | EXPECTED INPUTPUT | EXPECTED OUTPUT |
| --- | --- | --- | --- |
| LLR01 | Check the number dived by zero | Given number is divided by zero | Error |
| LLR02 | Check the base of log | Given number is other than 2,10 | Error |
| LLR03 | Check the number in square root | Given number is negative not positive | Error |
| LLR04 | Check the number in cube root | Given number is negative | Negative number |
| LLR05 | Check divided by big number | Given number is greater | Less than zero |
| LLR06 | Check divided by smaller number | Given number is smaller | Greater than zero |
| LLR07 | Check divided by negative number | Given number is negative | Negative number |

