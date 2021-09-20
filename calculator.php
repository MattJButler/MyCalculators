<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title></title>
</head>
<body>


<form action="functions.php" method="post">
<p>First number: </p><input type="text" name="num1"><br>
<p>Second number: </p><input type="text" name="num2">
<br><br>
<p>add:</p><input type="submit" name="plus"> <p>multiply: <p/><input type="submit" name="multiply">
<p>subtract: </p><input type="submit" name="minus"><p>divide:   <p/><input type="submit" name="divide">
</form>
<?php
	$add = $_POST['plus'];
	$subtract = $_POST['minus'];
	$multiply = $_POST['multiply'];
	$divide = $_POST['divide'];
	$num1 = $_POST['num1'];
	$num2 = $_POST['num2'];
	$addnum = $num1+$num2;
	$subnum = $num1-$num2;
	$multnum = $num1*$num2;
	$divnum = $num1/$num2;
	

if (isset($_POST['plus'])) 
	{
		echo $num1;
		echo " + ";
		echo $num2;
		echo "= " ;
		echo $addnum;
	}

if (isset($_POST['minus'])) 
	{
		echo $num1;
		echo " - ";
		echo $num2;
		echo "= " ;
		echo $subnum;
	}

if (isset($_POST['multiply'])) 
	{
		echo $num1;
		echo " x ";
		echo $num2;
		echo "= " ;
		echo $multnum;

	}


if (isset($_POST['divide'])) 
	{
		echo $num1;
		echo " / ";
		echo $num2;
		echo "= " ;
		echo $divnum;
	}






?>
</body>
</html>
