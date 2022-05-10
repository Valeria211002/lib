#include "sort_func.hpp"
#include "work_with_file.hpp"
#include "search_func.hpp"


int main()
{
//    string surname = "Shishmareva";
    
    print_programm_aim();
    open_lib_file();
    fill_lib_file();
    close_lib_file();
    search_name();
    search_year();
    sort_lib();
    sort_lib_year();
   
    
    
    return 0;
}

