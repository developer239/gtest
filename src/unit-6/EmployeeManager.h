#ifndef GOOGLE_TEST_SAMPLE_EMPLOYEE_MANAGER_H
#define GOOGLE_TEST_SAMPLE_EMPLOYEE_MANAGER_H

#include "Employee.h"
#include "IDatabaseConnection.h"

#include <map>
#include <vector>
#include <string>

class EmployeeManager {
  public:
    EmployeeManager(IDatabaseConnection* dbConnection);

    ~EmployeeManager();

    void setSalary(int employeeId, float newSalary);

    float getSalary(int employeeId) const;

    std::map<std::string, float> getSalariesGreater(float low) const;

    std::map<std::string, float> getSalariesBetween(float low, float high) const;

  private:
    std::map<std::string, float> vectorToMap(std::vector<Employee> const& employees) const;

  private:
    IDatabaseConnection* mDbConnection;
};

#endif
