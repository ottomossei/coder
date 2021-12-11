CURRENT=$(cd $(dirname $0);pwd)
DEBUG=$CURRENT"/debug/";
cd $DEBUG;
ESC=$(printf '\033');
printf "${ESC}[31m%s${ESC}[m\n" '---C++ Compile---';
make;
printf "${ESC}[33m%s${ESC}[m\n" '---Input---';
echo $(<sample_input.txt);
printf "${ESC}[33m%s${ESC}[m\n" '---Output---';
time ./debug < sample_input.txt;