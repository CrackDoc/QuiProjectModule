#ifndef QuiProjectModule_h__
#define QuiProjectModule_h__


#include "IQuiProjectModule.h"
#include <QtWidgets/QWidget>
#include "PublicMarco.h"
#include <QFileSystemModel>

namespace Ui
{
	class QuiProjectModule;
}
class CQuiProjectModule : public QWidget,public IQuiProjectModule
{
    Q_OBJECT

public:
    CQuiProjectModule(QWidget *parent = Q_NULLPTR);
	~CQuiProjectModule();
public:
	/**
	* @fn       GetName
	* @author   Crack
	* @brief    获取模块名称
	* @date     2021/4/11 22:10
	* @param
	* @return
	*/
    virtual std::string GetName() const;
	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise();
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise();

	/**
	 * @fn       FlushWorkSpaceDir()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/2 18:51
	 * @param    
	 * @return   
	*/
	virtual void FlushWorkSpaceDir();
	/**
 	* @fn       SetWorkSpaceDir
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/2 18:42
 	* @param    
 	* @return   
	*/
	virtual void SetWorkSpaceDir(const QString& dir);

	/**
	 * @fn       GetWorkSpaceDir
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/2 18:44
	 * @param    
	 * @return   
	*/
	virtual QString GetWorkSpaceDir() const;
private:
    Ui::QuiProjectModule*ui;

	QFileSystemModel m_FileSystemModel;

	QString m_strWorkSpaceDir;
};
DECLARE_MODULE(QuiProject, extern)
#endif // QuiProjectModule_h__