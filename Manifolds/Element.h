/*
This file defines the class for storage. An object of Element type can be
used as a point on a manifold or a tangent vector.

SmartSpace --> Element

---- WH
*/

#ifndef ELEMENT_H
#define ELEMENT_H

#include "Others/randgen.h"
#include <cstdarg>
#include <map>
#include <string>
#include "Manifolds/SmartSpace.h"
#include "Manifolds/SharedSpace.h"
#include "Others/def.h"

/*Define the namespace*/
namespace ROPTLIB{

  /*Variable and Vector, used throughout the ROPTLIB library, are just Element*/
  class Element;
  typedef Element Variable;
  typedef Element Vector;

	/*Declaration of SharedSpace. SharedSpace has been defined somewhere.
	Element is the based class of points in manifolds, tangent vectors in tangent spaces.
	The SharedSpace can be attached to an object of Element. */
	class SharedSpace;

	/*Defined the type MAP*/
	typedef std::map<std::string, SharedSpace *> MAP;

	class Element : public SmartSpace{
	public:
		/*Beside calling delete function in based class, it also removed all the tempory data.*/
		virtual ~Element();

		/*Create an object of Element with same size as this Element. This is a pure virtual function and
			has to be overwritted in derived classes.*/
		virtual Element *ConstructEmpty(void) const = 0;

		/*Copy this Element to "eta" Element. After calling this function,
		this Element and "eta" Element will use same space to store data. */
		virtual void CopyTo(Element *eta) const;

		/*Randomly create this Element. In other words, the space will be allocated based
		on the size. Then each entry in the space will be generated by the uniform distribution in [start, end].
		Note that all the temporary data are also removed.*/
		virtual void RandUnform(double start = 0, double end = 1);

		/*Randomly create this Element. In other words, the space will be allocated based
		on the size. Then each entry in the space will be generated by the normal distribution with mean and variance.
		Note that all the temporary data are also removed*/
		virtual void RandGaussian(double mean = 0, double variance = 1);

		/*Print the data. The string "name" is to mark the output such that user can find the output easily.
		If isonlymain is true, then only output the data without outputing temporary data. Otherwise,
		all the temporary data are also output.*/
		virtual void Print(const char *name = "", bool isonlymain = true) const;

		/*When the Element is instantiated as a point on manifold, then this function needs to be overloaded and randomly
		generate a point on the manifold.*/
		virtual void RandInManifold();

		/*Obtain this Element's pointer which points to the data;
		Users are encourage to call this function if they want to overwrite the data without caring about its original data.
		If the data is shared with other Element, then new memory are allocated without copying the data to the new memory.
		Note that all the temporary data are also removed. */
		virtual double *ObtainWriteEntireData(void);

		/*Obtain this Element's pointer which points to the data;
		If the data is shared with other Element, then new memory are allocated and the data are copied to the new memory.
		Note that all the temporary data are also removed. */
		virtual double *ObtainWritePartialData(void);

		///*If the data is shared with other Element, then new memory are allocated without copying the data to the new memory.
		//Note that all the temporary data are also removed. */
		//virtual void NewMemoryOnWrite(void);

		///*If the data is shared with other Element, then new memory are allocated and the data are copied to the new memory.
		//Note that all the temporary data are also removed.*/
		//virtual void CopyOnWrite(void);

		/*Add an object of SharedSpace type to this Element with the label name.*/
		virtual void AddToTempData(std::string name, SharedSpace * &Temp);

		/*Obtain the temp data with name. It is NOT allowed to modify the temp data.*/
		virtual const SharedSpace *ObtainReadTempData(std::string name) const;

		/*Obtain the temp data with name. It is allowed to modify the temp data.*/
		virtual SharedSpace *ObtainWriteTempData(std::string name);

		/*Remove a temp data with name from this Element. */
		virtual void RemoveFromTempData(std::string name);

		/*Remove all the temp data from this Element*/
		virtual void RemoveAllFromTempData();

		/*Check whether a temp data with name exists or not*/
		virtual bool TempDataExist(std::string name) const;
		//virtual void CopytoArray(double *array) const;

		/*Obtain the names of all the temp data*/
		void ObtainTempNames(std::string *names) const;

		/*Obtain the number of temp data*/
		inline integer GetSizeofTempData() const { return static_cast<integer> (TempData.size()); };
	protected:
		/*The mapping which store the information of temp data*/
		MAP TempData;
	};
}; /*end of ROPTLIB namespace*/

#endif
