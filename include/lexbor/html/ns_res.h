/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

/*
 * Caution!!! Important!!!
 * This file generated by the script "utils/lexbor/html/tags.py"!
 * Do not change this file!
 */


#ifndef LXB_HTML_NS_RES_H
#define LXB_HTML_NS_RES_H

#endif /* LXB_HTML_NS_RES_H */


#ifdef LXB_HTML_NS_CONST_VERSION
#ifndef LXB_HTML_NS_CONST_VERSION_3A3A54D256E0D335D876F9E54A5BC239
#error Mismatched namespaces version! See "lexbor/html/ns_const.h".
#endif /* LXB_HTML_NS_CONST_VERSION_3A3A54D256E0D335D876F9E54A5BC239 */
#else
#error You need to include "lexbor/html/ns_const.h".
#endif /* LXB_HTML_NS_CONST_VERSION */

#ifdef LXB_HTML_NS_RES_DATA
#ifndef LXB_HTML_NS_RES_DATA_ENABLED
#define LXB_HTML_NS_RES_DATA_ENABLED
static  lxb_html_ns_data_t lxb_html_ns_res_data[LXB_HTML_NS__LAST_ENTRY] = 
{
    {"-undef", "-undef", 6, "", 0, LXB_HTML_NS__UNDEF},
    {"-any", "-any", 4, "", 0, LXB_HTML_NS__ANY},
    {"HTML", "html", 4, "http://www.w3.org/1999/xhtml", 28, LXB_HTML_NS_HTML},
    {"Math", "math", 4, "http://www.w3.org/1998/Math/MathML", 34, LXB_HTML_NS_MATH},
    {"SVG", "svg", 3, "http://www.w3.org/2000/svg", 26, LXB_HTML_NS_SVG},
    {"XLink", "xlink", 5, "http://www.w3.org/1999/xlink", 28, LXB_HTML_NS_XLINK},
    {"XML", "xml", 3, "http://www.w3.org/XML/1998/namespace", 36, LXB_HTML_NS_XML},
    {"XMLNS", "xmlns", 5, "http://www.w3.org/2000/xmlns/", 29, LXB_HTML_NS_XMLNS}
};
#endif /* LXB_HTML_NS_RES_DATA_ENABLED */
#endif /* LXB_HTML_NS_RES_DATA */

#ifdef LXB_HTML_NS_RES_SHS_DATA
#ifndef LXB_HTML_NS_RES_SHS_DATA_ENABLED
#define LXB_HTML_NS_RES_SHS_DATA_ENABLED
static const lexbor_shs_entry_t lxb_html_ns_res_shs_data[] = 
{
    {NULL, NULL, 17, 0}, {"MATH", &lxb_html_ns_res_data[3], 4, 0}, 
    {"XMLNS", &lxb_html_ns_res_data[7], 5, 0}, {"SVG", &lxb_html_ns_res_data[4], 3, 0}, 
    {NULL, NULL, 0, 0}, {NULL, NULL, 0, 0}, 
    {NULL, NULL, 0, 0}, {"-UNDEF", &lxb_html_ns_res_data[0], 6, 0}, 
    {NULL, NULL, 0, 0}, {"-ANY", &lxb_html_ns_res_data[1], 4, 0}, 
    {"XML", &lxb_html_ns_res_data[6], 3, 0}, {"XLINK", &lxb_html_ns_res_data[5], 5, 0}, 
    {"HTML", &lxb_html_ns_res_data[2], 4, 0}, {NULL, NULL, 0, 0}, 
    {NULL, NULL, 0, 0}, {NULL, NULL, 0, 0}, 
    {NULL, NULL, 0, 0}, {NULL, NULL, 0, 0}
};
#endif /* LXB_HTML_NS_RES_SHS_DATA_ENABLED */
#endif /* LXB_HTML_NS_RES_SHS_DATA */
