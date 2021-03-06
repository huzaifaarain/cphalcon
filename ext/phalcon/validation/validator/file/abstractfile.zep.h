
extern zend_class_entry *phalcon_validation_validator_file_abstractfile_ce;

ZEPHIR_INIT_CLASS(Phalcon_Validation_Validator_File_AbstractFile);

PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, getMessageFileEmpty);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, setMessageFileEmpty);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, getMessageIniSize);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, setMessageIniSize);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, getMessageValid);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, setMessageValid);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, isAllowEmpty);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, checkUpload);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, checkUploadMaxSize);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, checkUploadIsEmpty);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, checkUploadIsValid);
PHP_METHOD(Phalcon_Validation_Validator_File_AbstractFile, getFileSizeInBytes);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_setmessagefileempty, 0, 0, 1)
	ZEND_ARG_INFO(0, messageFileEmpty)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_setmessageinisize, 0, 0, 1)
	ZEND_ARG_INFO(0, messageIniSize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_setmessagevalid, 0, 0, 1)
	ZEND_ARG_INFO(0, messageValid)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_isallowempty, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_isallowempty, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Validation, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, field, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, field)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkupload, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkupload, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadmaxsize, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadmaxsize, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisempty, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisempty, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisvalid, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisvalid, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Phalcon\\Validation, 0)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_getfilesizeinbytes, 0, 1, IS_DOUBLE, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_validation_validator_file_abstractfile_getfilesizeinbytes, 0, 1, IS_DOUBLE, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, size, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, size)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_validation_validator_file_abstractfile_method_entry) {
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, getMessageFileEmpty, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, setMessageFileEmpty, arginfo_phalcon_validation_validator_file_abstractfile_setmessagefileempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, getMessageIniSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, setMessageIniSize, arginfo_phalcon_validation_validator_file_abstractfile_setmessageinisize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, getMessageValid, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, setMessageValid, arginfo_phalcon_validation_validator_file_abstractfile_setmessagevalid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, isAllowEmpty, arginfo_phalcon_validation_validator_file_abstractfile_isallowempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, checkUpload, arginfo_phalcon_validation_validator_file_abstractfile_checkupload, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, checkUploadMaxSize, arginfo_phalcon_validation_validator_file_abstractfile_checkuploadmaxsize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, checkUploadIsEmpty, arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisempty, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, checkUploadIsValid, arginfo_phalcon_validation_validator_file_abstractfile_checkuploadisvalid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Validation_Validator_File_AbstractFile, getFileSizeInBytes, arginfo_phalcon_validation_validator_file_abstractfile_getfilesizeinbytes, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
