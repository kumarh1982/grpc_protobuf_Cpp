How to run this project:
===============
1. First start the vendors (assuming you are in 'test/' folder) using following command:
./run_vendors ../src/vendor_addresses.txt
[Note: the format is ./run_vendors [$path to vendors listening port file]]
2. Run the store in a separate terminal (assuming you are in 'src/' folder) using following command:
./store vendor_addresses.txt 0.0.0.0:50050 8
[Note: the format is ./store $[path to vendors ip- address file] $[store listening port] $[number of threads in threadpool] ]
3.Now, run the clients in a separate terminal (assuming you are in 'test/' folder) using following command:
./run_tests 0.0.0.0:50050
[Note: the format is ./run_tests $[store listeniang port]]
================
