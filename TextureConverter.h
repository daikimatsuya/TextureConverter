#pragma once
#include <string>
#include "externals/DirectXTex/DirectXTex.h"

//�e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	//<summary>
	//�e�N�X�`����WIC����DDS�ɕϊ�����
	//</summary>
	//<param name="filePath">�t�@�C���p�X</param>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	//<summary>
	//�e�N�X�`���t�@�C���ǂݍ���
	//</summary>
	//<param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);

	//<summary>
	//�}���`�o�C�g����������C�h������ɕϊ�
	//</summary>
	//<param name="mString">�}���`�o�C�g������</param>
	//<returns>���C�h������</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

private:
/// <summary>
/// �t�H���_�p�X�ƃt�@�C�����𕪗�����
/// </summary>
/// 	<pram name "filePath">�t�@�C���p�X</param>
	void SeparateFilePath(const std::wstring& filePath);

	//�f�B�N�g���p�X
	std::wstring directoryPath_;

	//�t�@�C����
	std::wstring fileName_;

	//�t�@�C���g���q
	std::wstring fileExt_;

private:
/// <summary>
/// DDS�e�N�X�`���Ƃ��ăt�@�C�������o��
/// </summary>
	void SaveDDSTextureToFile();

private:
	DirectX::TexMetadata metadata_;

	DirectX::ScratchImage scratchImage_;

	HRESULT result;
};

