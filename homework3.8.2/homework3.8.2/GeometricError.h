#pragma once
#include <stdexcept>
#include <string>

class GeometricError : public std::domain_error {
public:
    GeometricError(const std::string& reason) : std::domain_error(reason) {}
};