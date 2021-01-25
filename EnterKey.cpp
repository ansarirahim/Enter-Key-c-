void WaitForkey()
{
    std::string myString = "";

do {
     std::cout << "Press ENTER to exit" << std::endl;
     std::getline(std::cin, myString);
} while (myString.length() != 0);

std::cout << "Loop exited." << std::endl;
}
