#include <iostream>
#include <thread>
#include <chrono>

//using namespace std;

/*this is not a part of the book, it's just testing how threads work
https://solarianprogrammer.com/2011/12/16/cpp-11-thread-tutorial/*/

/*void call_from_thread(){
    std::cout << "Hello world!" << std::endl;
}*/
//std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;


int main()
{
    /*std::chrono::steady_clock::time_point beginy = std::chrono::steady_clock::now();
    std::thread t1(call_from_thread);
    t1.join();//the master thread will wait till the slave thread finishes
    t1.detach();//this will make the thread run independently of the master thread
    //once detached, forever detached and will crash the program
    //(if(t1.joinable())t1.join();)
    //std::ref(s) - creates a reference wrapper
    //threads can't be copied, only moved std::move()
    //t1.get_id();
    //std::this_thread::get_id();
    //oversubscription (if more threads than CPU cores)
    //std::thread::hardware_concurrency() - how many threads can be ran concurrrently

    std::chrono::steady_clock::time_point endy = std::chrono::steady_clock::now();

    std::cout << "Time difference(using threads) = " << std::chrono::duration_cast<std::chrono::microseconds>(endy - beginy).count() << "[us]" << std::endl;

    beginy = std::chrono::steady_clock::now();
    std::cout << "Hello world!\n";
    endy = std::chrono::steady_clock::now();

    std::cout << "Time difference(normal writing) = " << std::chrono::duration_cast<std::chrono::microseconds>(endy - beginy).count() << "[us]" << std::endl;*/


    return 0;
}
