#include <exception>

class IllegalBalanceException: public std::exception {

    public:
        IllegalBalanceException() noexcept = default;
        ~IllegalBalanceException() noexcept = default;
        virtual const char* what() const noexcept { return "Balance must be greater than zero"; };
};