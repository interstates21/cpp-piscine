#ifndef TOWER_CLASS_HPP
# define TOWER_CLASS_HPP

class Tower {
    public: 

    int       height = 200;

    Tower( char block );
    ~Tower( void );

    void build(void);

    private:
    char    block;    
};

#endif