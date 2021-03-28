#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad {

private:
	int _count;
	ISpaceMarine** _squad;

	void _deleteSquad();
	ISpaceMarine** _newSquad(int count);
	void _copySquad(const Squad &S);
	void _copySquad(ISpaceMarine** S);
	bool _searchMarine(ISpaceMarine* marine);

public:
	Squad();
	Squad(Squad const &squad);
	virtual ~Squad();

	void operator=(const Squad &S);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int n) const;
	virtual int push(ISpaceMarine* marine);
};

#endif
