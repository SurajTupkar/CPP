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

Concurrency and parallelism
    -> Concurrency
        -> Multiple tasks/threads are making progress during the same period of time 
    -> Like let suppose I have 3 threads t1,t2, and t3 in a single cpu core
    -> so instead of running one thread for long period of time
        t1,t2 and t3 or all threads makes progress during same period of time that is called concurrency
    
    -> Parallelism
        -> Multiple tasks/threads are running simultaneously or parallely on multiple cpu core
        or
        -> Multiple tasks/threads are actually executing at the same time on different cpu cores

    -> Let suppose I have three threads t1,t2,t3 
        -> This all three threading are executing on same time on different threads
        -> Like Core 1 -> Thread 1
                Core 2 -> Thread 2
                Core 3 -> Thread 3

Race Condition 
    -> Multiple threads are trying to access critical section or shared resource at a time and result depends on timing and order of their execution.
        ->  Like let suppose, two peoples are trying to book a single ticket
        -> Solution 
            -> Synchronization Mechanism
                -> 1) Mutex 
                        -> using
                            -> 1) lock_guards
                            -> 2) unique_locks
                    2) Conditional variables
                    3) Atomic Operations

Mutex 
    -> Mutual exclusion
        -> A synchronization mechansim which prevents accessing critical section or shared resources by multiple threads at a same time
        and prevents race condition

    -> 1) lock_guards
*/