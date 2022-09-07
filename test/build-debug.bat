
rd /s /q cmake-build-debug
mkdir cmake-build-debug
cd cmake-build-debug
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build . --config Debug
cd ..

rd /s /q cmake-install
cmake --install cmake-build-debug --prefix ./cmake-install --config Debug

pause
