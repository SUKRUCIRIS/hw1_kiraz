You need to install flex and bison first:
```
sudo apt install flex bison -y
```

Run following to compile the project:
```
mkdir build
cd build
cmake .. -DCMAKE_VERBOSE_MAKEFILE=1
make -j`nproc`
```

Then run following to run it:
```
./kiraz-hw1 ../kiraz.ki
```