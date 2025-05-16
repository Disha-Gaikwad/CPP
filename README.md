# CPP

🛠️ How to Run C++ Programs

Follow the steps below to clone this repository and run any .cpp file using a C++ compiler like g++.
📦 Prerequisites

Make sure you have the following installed on your system:

    g++ (GNU C++ Compiler)

    Git (to clone the repository)

✅ Install on Ubuntu/Debian-based systems:

sudo apt update

sudo apt install g++

✅ Install on Windows:

    Use MinGW or install C++ via WSL.

    Alternatively, use an IDE like Code::Blocks or Visual Studio.

✅ Install on macOS:

xcode-select --install

📥 Step 1: Clone the Repository

git clone https://github.com/Disha-Gaikwad/CPP.git

cd CPP

📁 Step 2: Navigate to the Program Directory

cd path/to/cpp/file

Example:

cd programs/basic

⚙️ Step 3: Compile the Program

g++ filename.cpp -o filename

Example:

g++ hello.cpp -o hello

▶️ Step 4: Run the Executable

./filename

Example:

./hello

🧼 Clean Up (Optional)

rm filename

🧠 Notes

If your program includes multiple .cpp or .h files, compile like this:

g++ file1.cpp file2.cpp -o output

For C++17 or later:

g++ -std=c++17 filename.cpp -o filename
