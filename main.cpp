#include <cstdio>
#include <cstdlib>


int main(int argc, char* argv[]) {

	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++) {
		//������argv��i�Ԗڂ�\��
		printf(argv[i]);
		//���s
		printf("\n");
	}

	system("pause");
	return 0;
}