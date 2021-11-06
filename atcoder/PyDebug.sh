CURRENT=$(cd $(dirname $0);pwd)
DEBUG=$CURRENT"/debug/";
cd $DEBUG;
ESC=$(printf '\033');
printf "${ESC}[31m%s${ESC}[m\n" '---Python---';
printf "${ESC}[33m%s${ESC}[m\n" '---Input---';
PY=$DEBUG"debug.py";
echo $(<sample_input.txt);
printf "${ESC}[33m%s${ESC}[m\n" '---Output---';
time python -u $PY < sample_input.txt;
