/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLiteStatement, NSSQLiteAdapter, NSMutableString;

@interface _NSSQLGenerator : NSObject {

	NSSQLiteStatement* _statement;
	NSSQLiteAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;

}
+(void)initialize;
-(void)dealloc;
@end
