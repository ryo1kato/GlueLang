ERROR_EXIT(){
	rm -f /tmp/$$-*
	exit 1
}

ERROR_CHECK(){
	[ "$(tr -d ' 0' <<< ${PIPESTATUS[@]})" = "" ] && return
	ERROR_EXIT
}

trap ERROR_EXIT 1 2 3 15

foreach(){

	while read line ; do
		"$1" $line
		ERROR_CHECK
	done
	ERROR_CHECK
}

cattac(){
	/bin/cat $1 | /usr/bin/tail -r
	ERROR_CHECK
}

main(){
	s=$( cattac )
ERROR_CHECK
	echo $s
ERROR_CHECK
}

main
ERROR_CHECK

rm -f /tmp/$$-*
