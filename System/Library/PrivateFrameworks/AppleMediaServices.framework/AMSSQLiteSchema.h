/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {

	AMSSQLiteConnection* _connection;

}

@property (readonly) long long currentUserVersion; 
-(void)_setUserVersion:(long long)arg1 ;
-(BOOL)migrateToVersion:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)tableExists:(id)arg1 ;
-(BOOL)column:(id)arg1 existsInTable:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(long long)currentUserVersion;
@end
