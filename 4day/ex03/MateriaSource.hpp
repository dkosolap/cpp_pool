#ifndef MATERIAL_SOURCE_HPP
# define MATERIAL_SOURCE_HPP 

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	int					_count;
	AMateria			*_mat[4];
public:
	MateriaSource();
	MateriaSource( MateriaSource const &ref );
	MateriaSource 	&operator=( MateriaSource const &ref );
	~MateriaSource();

	void		learnMateria(AMateria *m);
	AMateria 	*createMateria(std::string const &type);
};
#endif
