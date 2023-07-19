#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/**
 * struct dog - data type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: data stored in type
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _SAMPLE_HEADER_H_ */
