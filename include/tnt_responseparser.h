#ifndef H_LUA_TNT_RESPONSEPARSER
#define H_LUA_TNT_RESPONSEPARSER
int ltnt_response_bodylen(struct lua_State *L);

int ltnt_responseparser_parse(struct lua_State *L);
int ltnt_responseparser_gc(struct lua_State *L);

int ltnt_responseparser_new(struct lua_State *L);
#endif /* H_LUA_TNT_RESPONSEPARSER */
