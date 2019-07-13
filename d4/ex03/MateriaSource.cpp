#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        this->_materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
    *this = materiaSource;
}

MateriaSource::~MateriaSource() {}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
    (void)materiaSource;

    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();

    return 0;
}