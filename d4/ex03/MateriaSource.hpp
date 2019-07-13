#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
  AMateria *_materias[4];

public:
  MateriaSource();
  ~MateriaSource();

  MateriaSource(const MateriaSource &);
  MateriaSource &operator=(const MateriaSource &);

  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &);
};

#endif
