#include <iostream>

int main(int argc, char** argv)
{
  std::string username;
  std::string password;
  if(argc < 3)
  {
    std::cerr << "Invalid params!\n" << 
        "Pls use like this: " << argv[0] << " <username> <password>\n"; 
    return 1;
  }
  username = argv[1];
  password = argv[2];
  if(username.empty())
  {
    return 1;
  }
  if(password.empty())
  {
    return 1;
  } 
  std::cout << "Username: " << username << std::endl;
  std::cout << "Password: " << password << std::endl;
    
  return 0;
}
