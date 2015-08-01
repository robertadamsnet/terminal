#ifndef window_hpp_2015_0731_2204
#define window_hpp_2015_0731_2204 

#include "term_status.hpp"
#include "terminal.hpp"

namespace terminal {

class Window {
public:
  Window(); // throws std::exception

  auto addstr(const std::string&) const -> Status;  
};


inline
Window::Window(int nlines, int ncols, int begin_y, int begin_x)
  : handle_(newwin(nlines, ncols, begin_y, begin_x)) 
{
  if(handle_ == ERR) {
    throw(std::runtime_error("Could not create window; newwin returned ERR."));
  }
}

}

#endif//window_hpp_2015_0731_2204
