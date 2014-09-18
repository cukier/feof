/*
 * feof.c
 *
 *  Created on: 06/11/2012
 *      Author: cuki
 */
#include <stdio.h>
#include <string.h>
int main(void) {
	char one[50], two[50], three[250], four[25], five[1200], style[10];
	int i = 0;
	while (!feof(stdin)) {
		if (i % 2 == 0)
			strcpy(style, "tableRow0");
		else
			strcpy(style, "tableRow1");
		scanf("%[^\t\n]\t%[^\t\n]\t%[^\t\n]\t%[^\t\n]\t%[^\t\n]\n", one, two,
				three, four, five);
		//printf("%s\n%s\n%s\n%s\n%s\n",one,two,three,four,five);
		printf("<TR class=\"%s\">\n", style);
		printf(
				"\t<TD nowrap=\"yes\" width=\"15%\" valign=\"top\" id=\"TREECELL_10.2\" style=\"mso-fareast-font-family:&quot;Times New Roman&quot;;mso-ansi-language:EN-US;mso-fareast-language:EN-US;mso-bidi-language:AR-SA\" class=\"style2\">%s</TD>\n",
				one);
		printf(
				"\t<TD nowrap=\"yes\" width=\"12%\" valign=\"top\" id=\"TREECELL_10.2\" style=\"mso-fareast-font-family:&quot;Times New Roman&quot;;mso-ansi-language:EN-US;mso-fareast-language:EN-US;mso-bidi-language:AR-SA\" class=\"style2\">%s</TD>\n",
				two);
		printf("\t<TD valign=\"top\" nowrap style=\"width:237px\">%s</TD>\n",
				three);
		printf("\t<TD valign=\"top\" nowrap style=\"width:88px\">%s</TD>\n",
				four);
		printf("\t<TD valign=\"top\" nowrap style=\"width:267px\">%s</TD>\n",
				five);
		printf("</TR>\n");
		i++;
	}
	return 0;
}

