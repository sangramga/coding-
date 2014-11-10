read x
read y
read z
if [ "$x" -eq "$y" ] && [ "$x" -eq "$z" ] 
then
	echo "EQUILATERAL"
elif [ "$x" -ne "$y" ] && [ "$y" -eq "$z" ]
then
	echo "ISOSCELES"
elif [ "$z" -ne "$y" ] && [ "$x" -eq "$z" ]
then
	echo "ISOSCELES"
elif [ "$z" -ne "$y" ] && [ "$x" -eq "$y" ]
then
	echo "ISOSCELES"
else
	echo "SCALENE"
fi


