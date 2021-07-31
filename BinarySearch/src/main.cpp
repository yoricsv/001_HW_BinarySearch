#include "../inc/main.h"

#ifdef CHECK_STRING_ON_NUMBER
    int StringParser(std::string data)
    {
        std::string buffer;
        int counter = 0;

        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] != ' ' || data[i] != '\0')
                buffer = buffer + data[i];
            else
            {
                int modString = std::stoi(buffer);    //convert string to integer by StoI function
                buffer.clear();                       //after that need to clean a buffer
                counter++;
            }
        }
    }

    std::string  get_number;
    std::regex   integer_expr ("(\\+|-)?[[:digit:]]+");     //string::empty true if the string length is 0, false otherwise
    while (!get_number.empty())
    {
        std::cout << "For creating a Dynamic Array enter his length:" << std::endl;
        std::cin  >> get_number;
        if (regex_match(get_number, integer_expr))
            std::cout << "Input is an integer"                        << std::endl;
        else
            std::cout << "\tERROR!!! Please, try again!"              << std::endl;
    }

    std::cout << "Creating an Array type numbers divide them by space (' '):" << std::endl;
    std::string  get_number;
    std::getline (std::cin, get_number);
    std::string  input;
    std::regex   integer_expr ("(\\+|-)?[[:digit:]]+");     //As long as the input is correct ask for another number
    while (true)
    {
        std::cout << "Enter the input: ";
        std::cin >> input;
        if (!cin) break;

        if (input == "q") //Exit when the user inputs q
            break;
        if (regex_match(input, integer_expr))
            std::cout << "Input is an integer"            << std::endl;
        else
        {
            std::cout << "Invalid input : Not an integer" << std::endl;
        }
    }
#endif // !CHECK_STRING_ON_NUMBER

// MAIN FUNCTION BEGIN //
int main()
{

    int program_state = 0;

    while(exit)
    {
        switch (program_state)
        {
            case CHOSE_DYNAMIC_STRUCT:
            {
                void actions_list();
                std::cin >> program_state;

                switch (program_state)
                {
                    case USE_DYNAMIC_ARRAY:         program_state = USE_DYNAMIC_ARRAY;     break;
                    case USE_VECTOR:                program_state = USE_VECTOR;            break;
                    default: {void warning_list();  program_state = CHOSE_DYNAMIC_STRUCT;} break;
                }
            }
            break;
            case USE_VECTOR:
            {
                int get_number = 0;

                std::cout << "Creating a Dynamic Vector enter its length:" << std::endl;
                std::cin >> get_number;

                vector <int> Array = { 0 };
                int * ptrArray = new int[get_number];

                fillArr       (Array, Array.size());
                outArr        (Array, Array.size());

                std::cout << std::endl;

                sort_Bubble   (Array, Array.size());
                rightShift    (Array, Array.size());
                search_Binary (Array, Array.size());

                delete[] ptrArray;

                program_state = CHOSE_DYNAMIC_STRUCT;
            }
            break;
            case USE_DYNAMIC_ARRAY:
            {
                int length = 0;

                std::cout << "For creating a Dynamic Array enter his length:" << std::endl;
                std::cin  >> length;

                int * dynArray = new int[length];

                fillArr       (dynArray, length);
                outArr        (dynArray, length);
                
                std::cout << std::endl;

                sort_Bubble   (dynArray, length);
                rightShift    (dynArray, length);
                search_Binary (dynArray, length);

                delete[] dynArray;

                program_state = CHOSE_DYNAMIC_STRUCT;
            }
            break;
            default: program_state = CHOSE_DYNAMIC_STRUCT; break;
        }
    }

    return 0;
}   // MAIN FUNCTION END //
