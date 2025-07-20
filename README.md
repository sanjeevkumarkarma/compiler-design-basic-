COMPANY: CODTECH IT SOLUTIONS PVT.LTD
*NAME: Sanjeev kumar karma 
INTERN ID:CT04DG3178
DOMAIN: C++ LANGUAGE
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH KUMAR
PARAGRAPH :
This C++ program performs file compression using multithreading and the Zlib compression library. The purpose of this program is to read a large file, divide it into parts, compress each part in parallel using multiple threads, and then write the compressed chunks into an output file. This helps in achieving faster compression compared to doing it with a single thread. The program uses standard C++ libraries like <iostream>, <fstream>, <vector>, <thread>, and <chrono> for input/output operations, memory handling, multithreading, and measuring time. The <zlib.h> header is used to apply compression to chunks of the file data.

The program starts by defining a constant numThreads with a value of 4, meaning it will use four threads for compression. Two global vectors are declared: one to hold the compressed chunks from each thread, and another to record the time taken by each thread for compressing its chunk. A function compressChunk is defined to compress a given portion of the input data. It records the time before and after compression using high_resolution_clock and stores the duration in milliseconds. It also uses the compress() function from Zlib to perform the actual compression. If compression fails, it shows an error message.

In the main() function, the program first tries to open the input file in binary mode. If it fails, it shows an error and exits. If successful, it reads the entire content into a vector<char>. The file is then divided equally among the number of threads. If the size is not perfectly divisible, the last thread gets the remaining data. Each part is stored in a separate vector.

After preparing the chunks, the program starts the multithreaded compression. It launches a thread for each chunk and passes the appropriate function and parameters. Once all threads complete, the compressed data from all threads is collected and written into an output file named compressed.bin. Each chunk is written with its size so that it can be decoded properly later.

To compare performance, the program also performs the same compression task sequentially (without using threads) and records the time. It then compares the time taken in both cases and calculates the speedup gained by using multithreading. It also shows the final compressed file size. This helps in understanding how effective multithreading is for this kind of workload.

In the end, the program displays a summary: the input file size, time taken by multithreaded and single-threaded compression, performance gain, and the final output file size. This project demonstrates practical use of multithreading, performance analysis, and file I/O in C++. It's especially useful for handling large files where performance is critical. The code structure is clean and modular, making it easier for beginners to understand how to work with threads and data compression in C++.
