================================================================================
MICROSOFT FOUNDATION CLASS ���C�u����: ComClientCalcAddMFC �v���W�F�N�g�̊T�v
===============================================================================

�A�v���P�[�V���� �E�B�U�[�h���쐬���� ComClientCalcAddMFC �ɂ� Microsoft 
Foundation Class �̊�{�I�Ȏg������������Ă��܂��B�A�v���P�[�V�����쐬�̂ЂȌ^
�Ƃ��Ă��g�����������B

���̃t�@�C���ɂ� ComClientCalcAddMFC �A�v���P�[�V�������\�����Ă���e�t�@�C
���̊T�v�������܂܂�܂��B

ComClientCalcAddMFC.vcproj
   ����̓A�v���P�[�V���� �E�B�U�[�h�Ő������ꂽ VC++ �v���W�F�N�g�̃��C�� �v
   ���W�F�N�g �t�@�C���ł��B�t�@�C�����������ꂽ Visual C++ �̃o�[�W�������
   �܂܂�Ă��܂��B�܂��A�A�v���P�[�V���� �E�B�U�[�h�őI�������v���b�g�t�H�[
   ���A�\������уv���W�F�N�g�@�\�Ɋւ�������܂܂�Ă��܂��B

ComClientCalcAddMFC.h
   ����̓A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B���̃t�@�C���ɂ́A
   Resource.h ���܂ށA���̑��̃v���W�F�N�g�ŗL�̃w�b�_�[���܂܂�Ă��āA
   CComClientCalcAddMFCApp �A�v���P�[�V���� �N���X��錾���܂��B

ComClientCalcAddMFC.cpp
   ����́A�A�v���P�[�V���� �N���X CComClientCalcAddMFCApp ���܂ރ��C�� �A�v���P�[
   �V���� �\�[�X �t�@�C���ł��B

ComClientCalcAddMFC.rc
   ����́A�v���O�������g�p���� Microsoft Windows �̃��\�[�X�̈ꗗ�t�@�C����
   ���B���̃t�@�C���ɂ� RES �T�u�f�B���N�g���ɕۑ�����Ă���A�C�R���A�r�b�g�}
   �b�v�A�J�[�\�����܂܂�Ă��܂��B���̃t�@�C���́AMicrosoft Visual C++ �Œ���
   �ҏW���邱�Ƃ��ł��܂��B�v���W�F�N�g ���\�[�X�� 1041 �ɂ���܂��B

res\ComClientCalcAddMFC.ico
   ����́A�A�v���P�[�V�����̃A�C�R���Ƃ��Ďg�p�����A�C�R���t�@�C���ł��B����
   �A�C�R���̓��C�� ���\�[�X �t�@�C�� ComClientCalcAddMFC.rc �Ɋ܂܂�Ă���
   ���B

res\ComClientCalcAddMFC.rc2
   ���̃t�@�C���� Microsoft Visual C++ ���g�p���Ȃ��ŕҏW���ꂽ���\�[�X���܂��
   ���܂��B���\�[�X �G�f�B�^�ŕҏW�ł��Ȃ����\�[�X�͂��ׂĂ��̃t�@�C���ɓ����
   ���������B

/////////////////////////////////////////////////////////////////////////////

���C�� �t���[�� �E�B���h�E:
    �v���W�F�N�g�͕W���� MFC �C���^�[�t�F�C�X���܂݂܂��B

MainFrm.h, MainFrm.cpp
   �����̃t�@�C���́A�t���[�� �N���X CMainFrame ���܂݂܂��B
   �t���[�� �N���X�� CMDIFrameWnd ����h�����A���ׂĂ� MDI �t���[���@�\�𐧌�
   ���܂��B

res\Toolbar.bmp
   ���̃r�b�g�}�b�v �t�@�C���̓c�[�� �o�[�̃^�C�� �C���[�W�Ƃ��Ďg�p����܂��B
   �����c�[�� �o�[����уX�e�[�^�X �o�[�́ACMainFrame �N���X��
   �쐬����܂��B�c�[�� �o�[�̃{�^����ǉ�����ɂ́A���̃c�[�� �o�[�̃r�b�g�}�b
   �v�����\�[�X �G�f�B�^���g�p���ĕҏW���AComClientCalcAddMFC.rc �t�@�C����
   �� IDR_MAINFRAME TOOLBAR �z����X�V���Ă��������B
/////////////////////////////////////////////////////////////////////////////

�q�t���[�� �E�B���h�E:

ChildFrm.h, ChildFrm.cpp
   �����̃t�@�C���́AMDI �A�v���P�[�V�����̎q�E�B���h�E���T�|�[�g���� 
   CChildFrame �N���X�̒�`�Ǝ������s���܂��B

/////////////////////////////////////////////////////////////////////////////

�A�v���P�[�V���� �E�B�U�[�h�� 1 �̃h�L�������g�̎�ނ� 1 �̃r���[���쐬��
�܂�:

ComClientCalcAddMFCDoc.h, ComClientCalcAddMFCDoc.cpp - �h�L�������g
   �����̃t�@�C���� CComClientCalcAddMFCDoc �N���X���܂݂܂��B���ʂȃh�L�������g 
   �f�[�^��ǉ�������A�t�@�C����ۑ�������A
   (via CComClientCalcAddMFCDoc::Serialize) ��ǂݍ��񂾂肷��ɂ́A�����̃t�@�C
   ����ҏW���Ă��������B

ComClientCalcAddMFCView.h, ComClientCalcAddMFCView.cpp - �h�L�������g�̃r���[
   �����̃t�@�C���� CComClientCalcAddMFCView �N���X���܂݂܂��B
   CComClientCalcAddMFCView �I�u�W�F�N�g�� CComClientCalcAddMFCDoc �I�u�W�F�N�g��\����
   ��̂Ɏg�p����܂��B

res\ComClientCalcAddMFCDoc.ico
   ���̃t�@�C���́ACComClientCalcAddMFCDoc �N���X�� MDI �q�E�B���h�E�p�A�C�R���Ƃ�
   �Ďg�p�����A�C�R�� �t�@�C���ł��B���̃A�C�R���́A���C�� ���\�[�X�t�@�C�� 
   ComClientCalcAddMFC.rc �Ɋ܂܂�Ă��܂��B


/////////////////////////////////////////////////////////////////////////////

���̑��̋@�\:

ActiveX �R���g���[��
   �A�v���P�[�V������ ActiveX �R���g���[���̎g�p�Ɋւ���T�|�[�g���܂݂܂��B

����ƈ���v���r���[�̃T�|�[�g
   �A�v���P�[�V���� �E�B�U�[�h�́A MFC ���C�u�������� CView �N���X�̃����o�֐�
   ���Ăяo�����Ƃɂ���āA����A����̐ݒ�A����ш���v���r���[ �R�}���h����
   ������R�[�h�𐶐����܂����B

Windows �\�P�b�g
   �A�v���P�[�V������ TCP/IP �l�b�g���[�N�o�R�̒ʐM���m�����邽�߂̃T�|�[�g��
   �܂݂܂��B

/////////////////////////////////////////////////////////////////////////////

���̑��̕W���t�@�C��:

StdAfx.h, StdAfx.cpp
   �����̃t�@�C���́A���ɃR���p�C�����ꂽ�w�b�_�[ �t�@�C�� (PCH) 
   ComClientCalcAddMFC.pch ����ɃR���p�C�����ꂽ�^�̃t�@�C�� StdAfx.obj ��
   �r���h���邽�߂Ɏg�p����܂��B

Resource.h
   ����͐V�K���\�[�X ID ���`����W���w�b�_�[ �t�@�C���ł��BMicrosoft 
   Visual C++ �͂��̃t�@�C���̓ǂݎ��ƍX�V���s���܂��B

ComClientCalcAddMFC.manifest
   �A�v���P�[�V���� �}�j�t�F�X�g �t�@�C���� Windows XP �ŁASide-by-Side �A�Z��
   �u���̓���̃o�[�W�����Ɋւ���A�v���P�[�V�����̈ˑ��֌W��������邽�߂Ɏg�p
   ����܂��B���[�_�[�͂��̏����g�p���āA�A�Z���u�� �L���b�V������K�؂ȃA�Z
   ���u�����A�܂��̓A�v���P�[�V��������v���C�x�[�g �A�Z���u����ǂݍ��݂܂��B
   �A�v���P�[�V���� �}�j�t�F�X�g�͍ĔЕz�p�ɁA���s�\�A�v���P�[�V�����Ɠ����t
   �H���_�ɃC���X�g�[�������O�� .manifest �t�@�C���Ƃ��Ċ܂܂�Ă��邩�A�܂�
   �̓��\�[�X�̃t�H�[�����̎��s�\�t�@�C���Ɋ܂܂�Ă��܂��B
/////////////////////////////////////////////////////////////////////////////

���̑��̒���:

�A�v���P�[�V���� �E�B�U�[�h�� "TODO:" �Ŏn�܂�R�����g���g�p���āA�ǉ�������J
�X�^�}�C�Y����K�v������\�[�X �R�[�h�̕����������܂��B

�A�v���P�[�V���������L DLL ���� MFC ���g�p����ꍇ�́AMFC DLL ���ĔЕz����K�v
������܂��B�܂��A�A�v���P�[�V�������I�y���[�e�B���O �V�X�e���̃��P�[���ȊO�̌�
����g�p���Ă���ꍇ���A�Ή����郍�[�J���C�Y���ꂽ���\�[�X MFC90XXX.DLL ���Ĕ�
�z����K�v������܂��B�����̃g�s�b�N�̏ڍׂɂ��ẮAMSDN �h�L�������g�� 
Visual C++ �A�v���P�[�V�����̍ĔЕz�Ɋւ���Z�N�V�������Q�Ƃ��Ă��������B

/////////////////////////////////////////////////////////////////////////////
