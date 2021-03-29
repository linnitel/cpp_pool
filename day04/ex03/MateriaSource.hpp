
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

private:
	AMateria* _source[MAX_MATERIA];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &materia);
	virtual ~MateriaSource();

	void operator=(const MateriaSource &MS);

	virtual void learnMateria(AMateria *materia);
	virtual AMateria* createMateria(std::string const & type);
};


#endif
