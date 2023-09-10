#include <exception>

class InsufficientFundsException: public std::exception {

    public:
        InsufficientFundsException() noexcept = default;
        ~InsufficientFundsException() noexcept = default;
        virtual const char* what() const noexcept { return "Insufficient funds!"; };
};