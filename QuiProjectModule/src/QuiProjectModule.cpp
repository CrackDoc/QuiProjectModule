#include "QuiProjectModule.h"
#include "ui_QuiProjectModule.h"
#include <QFileIconProvider>
#include <QApplication>
#include <QDesktopWidget>
CQuiProjectModule::CQuiProjectModule(QWidget *parent)
    : QWidget(parent)
	,ui(new Ui::QuiProjectModule)
{
    ui->setupUi(this);
}
CQuiProjectModule::~CQuiProjectModule()
{
	
}
std::string CQuiProjectModule::GetName() const
{
	return "";
}

std::string CQuiProjectModule::GetCompany() const
{
	return "";
}

std::string CQuiProjectModule::GetVersion() const
{
	return "";
}

std::string CQuiProjectModule::GetDescription() const
{
	return "";
}

bool CQuiProjectModule::Initialise()
{
	return true;
}

bool CQuiProjectModule::Uninitialise()
{
	return true;
}


void CQuiProjectModule::FlushWorkSpaceDir()
{
	m_FileSystemModel.setRootPath(m_strWorkSpaceDir);
	m_FileSystemModel.iconProvider()->setOptions(QFileIconProvider::DontUseCustomDirectoryIcons);
	ui->treeView->setModel(&m_FileSystemModel);
	if (!m_strWorkSpaceDir.isEmpty()) {
		const QModelIndex rootIndex = m_FileSystemModel.index(QDir::cleanPath(m_strWorkSpaceDir));
		if (rootIndex.isValid())
			ui->treeView->setRootIndex(rootIndex);
	}
	// Demonstrating look and feel features
	ui->treeView->setAnimated(false);
	ui->treeView->setIndentation(20);
	ui->treeView->setSortingEnabled(true);
	const QSize availableSize = QApplication::desktop()->availableGeometry(ui->treeView).size();
	ui->treeView->resize(availableSize / 2);
	ui->treeView->setColumnWidth(0, ui->treeView->width() / 3);

	ui->treeView->setWindowTitle(QObject::tr("Dir View"));
}

void CQuiProjectModule::SetWorkSpaceDir(const QString& dir)
{
	m_strWorkSpaceDir = dir;
}

QString CQuiProjectModule::GetWorkSpaceDir() const
{
	return m_strWorkSpaceDir;
}
IMPLEMENT_MODULE(QuiProject)