#include "IO.h"

CIO::~CIO()
{
}



string CIO::GetStringLine(UINT uiBufLen)
{
	char *pStr = NULL;
	const char *pGetStr = NULL;

	pStr = (char *)malloc(sizeof(char) * (uiBufLen + 1));
	if (NULL == pStr)
		return("");
	pGetStr = fgets(pStr, uiBufLen + 1, stdin);
	if (NULL == pStr) {
		free(pStr);
		pStr = NULL;
		return("");
	}
	while (*pStr) {
		if ('\n' == *pStr) 
			*pStr = '\0';
		++pStr;
	}
	string strStr(pGetStr);

	return(strStr);
}
