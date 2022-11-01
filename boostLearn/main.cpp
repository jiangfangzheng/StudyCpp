#include <cstdio>
#include <iostream>
#include <boost/thread.hpp>

using namespace std;

int main(int argc, char **argv) {
    printf("hello world\n");
    boost::this_thread::sleep(boost::posix_time::seconds(2));
    cout << "ok...." << endl;
    boost::this_thread::get_id();
    return 0;
}
