#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include <Windows.h>

enum Argument{
	kApplicationPath,	//�A�v���P�[�V�����̃p�X
	kFilePath,				//�n���ꂽ�t�@�C���̃p�X
	NumArgument
};

int main(int argc, char* argv[]) {

	assert(argc >= NumArgument);

	//COM�@���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^
	TextureConverter converter;


	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++) {
		//������argv��i�Ԗڂ�\��
		printf(argv[i]);
		//���s
		printf("\n");
	}

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);
	
	//COM�@���C�u�����̏I��
	CoUninitialize();

	system("pause");
	return 0;
}