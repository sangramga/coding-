read n
p=$n
sum=0
while [ "$p" -gt "0" ]
do 
	read t
	let "sum+=$t"
	let "p--"
done
printf "%.3f\n" `echo $sum/$n | bc -l`

