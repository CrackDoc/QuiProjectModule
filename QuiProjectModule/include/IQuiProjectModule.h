#ifndef IQuiProjectModule_h__
#define IQuiProjectModule_h__


#include <string>
#include <QString>

class IQuiProjectModule
{
public:
	virtual ~IQuiProjectModule(){}
/**
	 * @fn       GetName
	 * @author   Crack
	 * @brief    获取模块名称
	 * @date     2021/4/11 22:10
	 * @param    
	 * @return   
	*/
	virtual std::string GetName() const  = 0;

	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const  = 0;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const  = 0;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const = 0;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise() = 0;
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise() = 0;


	/**
	 * @fn       FlushWorkSpaceDir
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/2 18:52
	 * @param    
	 * @return   
	*/
	virtual void FlushWorkSpaceDir() = 0;
	/**
	 * @fn       SetWorkSpaceDir
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/2 18:42
	 * @param    
	 * @return   
	*/
	virtual void SetWorkSpaceDir(const QString& dir) = 0;

	/**
	 * @fn       GetWorkSpaceDir
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/2 18:44
	 * @param    
	 * @return   
	*/
	virtual QString GetWorkSpaceDir() const = 0;
};
#endif // IQuiProjectModule_h__