/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class QLSqliteDatabase;

@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {

	QLSqliteDatabase* _sqliteDatabase;
	sqlite3_stmtRef _stmt;

}
-(void)dealloc;
-(id)initWithSqliteDatabase:(id)arg1 ;
@end

