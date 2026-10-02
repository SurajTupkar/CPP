/*
1) What is program
-> Program means the code we have written and stored on disk

2) What is Process
-> A program is being executed that is process or we can say program under execution is called process

like let suppose 
                    Program / Code that i have written for adding 2 numbers
                                |
                        stored on disk (MyApp.exe)
                                |
                        Run/ double click on exe
                                |
                        OS loads this program in RAM
                                |
                        Now it become Process

What is Thread 
    -> A thread is an execution flow within a process
        Process
            -> Thread 1
            -> Thread 2
            -> Thread 3
        Means a process can contain multiple threads

    -> What is execution Flow
        -> execution flow means sequence in which instruction are executed
            -> like if i have code for adding two numbers 
            ->  int a = 10;
                int b = 20;
                int c = a + b;
                cout<<c<<endl; 
            -> so this is execution flow 

Why do we need thread ?
    -> suppose my application needs to different tasks
        -> like 1) Receives data from ECU
                2) Processing Data
                3) Write Logs
                
    -> Without thread they can run sequentialy like
        -> first we receive data from ECU
        -> Then process data
        -> the write logs
    -> But with the threads
        Thread 1 : Receives data from ECU
        Thread 2 : Process Data
        Thread 3 : Write logs

What are shared and separate between threads
    1) Shared
        -> Code
        -> Global variable
        -> Static Variable
        -> Heap 
    2) Separate
        -> Stack
        -> Registers   
            -> Means small and fast storage location in a cpu core
        -> Program Counter/Instructor counter (PC) 

*/