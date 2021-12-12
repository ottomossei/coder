CURRENT=$(cd $(dirname $0);pwd)
DEBUG=$CURRENT"/debug/";
cd $DEBUG;
ESC=$(printf '\033');
printf "${ESC}[31m%s${ESC}[m\n" '---C++ Compile---';
docker exec -it gcc g++ workplace/atcoder/debug/debug.cpp -o debug
printf "${ESC}[33m%s${ESC}[m\n" '---Input---';
echo $(<sample_input.txt);
printf "${ESC}[33m%s${ESC}[m\n" '---Output---';
docker exec -i gcc time -p ./debug < sample_input.txt;