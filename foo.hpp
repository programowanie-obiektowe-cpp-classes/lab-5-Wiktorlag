#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;

 for (auto osoba = people.rbegin(); osoba != people.rend(); ++osoba)
 {
     osoba->birthday();
     
     if (osoba->isMonster())
         result.push_back('n');
     else
         result.push_back('y');
 }
    return result;
}
