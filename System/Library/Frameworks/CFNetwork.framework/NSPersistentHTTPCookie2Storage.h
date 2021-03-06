/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSInternalHTTPCookie2Storage.h>

@class NSURL, NSString;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {

	sqlite3Ref persistentDb;
	sqlite3_stmtRef insertCookiesStmt;
	sqlite3_stmtRef selectDomainCookiesStmt;
	sqlite3_stmtRef selectAllCookiesStmt;
	sqlite3_stmtRef deleteCookiesStmt;
	sqlite3_stmtRef deleteAllCookiesStmt;
	NSURL* _path;

}

@property (retain) NSURL * path;                                    //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginTransaction;
-(id)initWithPath:(id)arg1 ;
-(void)setCookie:(id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(id)init;
-(id)getAllCookies;
-(void)deleteCookies:(id)arg1 ;
-(NSURL *)path;
-(id)getCookiesWithFilter:(id)arg1 ;
-(void)deleteAllCookies;
-(void)deleteCookiesWithFilter:(id)arg1 ;
-(void)setCookies:(id)arg1 ;
-(void)commitTransaction;
-(void)setPath:(NSURL *)arg1 ;
@end

