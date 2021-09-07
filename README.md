# Attendance Management System


<h1>Introduction</h1>

This summer vacation, I thought to revise my C++ skills with something new. So I created this project. This is a backend codebase for SAP attendance taking. Works as a console application.
</br>

<h1>How To Run</h1>

1. Clone this repository in your local memory<br>
2. Open <b>Attendance Management System</b> folder with VS Code.<br>
3. Open terminal and write <i>make</i> in terminal.<br>
4. Code will start to compile (Some warning may show but those are not problem).<br>
5. Type <i>.\Easy_Attendance.exe</i> and press enter.<br>
6. Make the terminal full screen and Enjoy!<br>
7. (Optional) You can directly open the Easy_Attendance.exe from your <b>Console-SAP-Application</b> folder once the compilation is done.<br>
8. Use username <i>TasnimAnas</i> (Not Case Sensitive).<br>
9. Use Password <i>Kiit@2024</i> (Case sensitive).<br>
10. Checkout all features!

</br>
<h1>Features</h1>
<h2>1. On entering, this console application let you choose to login or exit.</h2>

![image](https://user-images.githubusercontent.com/80065444/126076402-efda2e28-55ff-4ce8-b284-de2a8f45fbc1.png)

</br>
<h2>2. On login page you have to login with credentials (Teachers Credentials). password is encrypted in backend.</h2>

![image](https://user-images.githubusercontent.com/80065444/126076447-6c93e008-039c-438d-9d43-6a0a291a6ccc.png)

</br>
<h2>3. After login for the first time, you have to add student details.</h2>

![image](https://user-images.githubusercontent.com/80065444/126076482-3470bb66-8b55-418f-a930-d9ef8bb770a5.png)

</br>
<h2>4. You can add student by putting them in .Data/input.bin folder directly!</h2>

![image](https://user-images.githubusercontent.com/80065444/126076621-cbdd73b6-4b0d-4199-a5a7-d50e2a9fb8dd.png)

</br>
<h2>5. You can see the added details in SEE STUDENT DETAILS option</h2>

![image](https://user-images.githubusercontent.com/80065444/126076667-07c0e3e6-d1a5-4765-af18-246ce62971ed.png)

</br>

![image](https://user-images.githubusercontent.com/80065444/126076695-ff70a187-887b-4766-95e6-9ac8ccef834a.png)

</br>
<h2>6. Go to take attendance option to take attendance</h2>

![image](https://user-images.githubusercontent.com/80065444/126076777-dfa9fe39-ea62-419b-baf6-0f007451c362.png)

</br>
<h2>7. Enter the date you are taking attendance for</h2>

![image](https://user-images.githubusercontent.com/80065444/126076805-edf4a2b4-3ffd-4c8d-8540-315524898068.png)

</br>
<h2>8. Student details comes in ascending order. Take attendance by 1 for present and 0 for absents.</h2>

![image](https://user-images.githubusercontent.com/80065444/126076846-ec25a812-34cc-4ccc-88a8-68a58ac83f43.png)

</br>
<h2>9. A txt file automatically created consisting attendance details of that day (in OUTPUT/ATTENDANCE folder.</h2>
  
![image](https://user-images.githubusercontent.com/80065444/126076906-5dceb8b6-b0ab-4b98-ada2-b45deb643d05.png)

</br>
<h2>10. A student.txt file created consisting all details of all student. (in Output folder)</h2>
    
![image](https://user-images.githubusercontent.com/80065444/126076954-be591e4e-9b6a-4f40-bfa4-2470ec794521.png)

</br>
<h2>11. .bin files in .Data folder get updated everytime you make change in student and their attendance or remove student.</h2>
<h2>12. Close the app and enter again, you will find all previus data stored! (From bin folders. Dont delete those)
<h2>13. Adding new student automatically sorts all student data in ascending order accroding to roll.
<h2>14. Input <i>-1</i> anywhere to get to previous selection page (Works as back button).
<h2>15. Input <i>-6969</i> in the user home (page which comes after login) to delete all previously stored data. (Student details and attendance details)</h2>
<h2>16. Many more features! Hard to imagine in console application.
