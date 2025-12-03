#!/bin/bash

# Crear archivos de prueba
echo "hello world" > tests/test1.txt
echo "hello hello hello" > tests/test2.txt
echo "no match here" > tests/test3.txt
echo "" > tests/empty.txt

make

echo "--> Test 1: Basic replacement <--"
./replace tests/test1.txt "hello" "goodbye"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

echo ""
echo "--> Test 2: Multiple occurrences <--"
./replace tests/test2.txt "hello" "hi"
cat tests/test2.txt.replace
rm -f tests/test2.txt.replace

echo ""
echo "--> Test 3: No match <--"
./replace tests/test3.txt "xyz" "abc"
cat tests/test3.txt.replace
rm -f tests/test3.txt.replace

echo ""
echo "--> Test 4: Error handling - empty s1 <--"
./replace tests/test1.txt "" "x"

echo ""
echo "--> Test 5: Error handling - file not found <--"
./replace nonexistent.txt "a" "b"

echo ""
echo "--> Test 6: Error handling - wrong args <--"
./replace

echo ""
echo "--> Test 7: s1 longer than s2 <--"
./replace tests/test1.txt "hello" "hi"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

echo ""
echo "--> Test 8: s2 longer than s1 <--"
./replace tests/test1.txt "hi" "hello there"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

echo ""
echo "--> Test 9: Overlapping patterns <--"
./replace tests/test1.txt "ll" "llll"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

echo ""
echo "--> Test 10: s1 == s2 <--"
./replace tests/test1.txt "hello" "hello"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

echo ""
echo "--> Test 11: Empty file <--"
./replace tests/empty.txt "a" "b"
cat tests/empty.txt.replace
rm -f tests/empty.txt.replace

echo ""
echo "--> Test 12: Special characters <--"
./replace tests/test1.txt "hello" "h@ll0!"
cat tests/test1.txt.replace
rm -f tests/test1.txt.replace

# Limpiar archivos de prueba
rm -f tests/test1.txt tests/test2.txt tests/test3.txt tests/empty.txt