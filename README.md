you need to install flex and bison first:
```
sudo apt install flex bison -y
```

Then run following:
```
mkdir build
cd build
cmake .. -DCMAKE_VERBOSE_MAKEFILE=1
make -j`nproc`
```