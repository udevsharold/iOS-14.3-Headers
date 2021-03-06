/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection, NSString;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	NSString* _tableName;
	NSString* _validateStartingPersistentIdSQL;
	NSString* _nextUsedPersistentIdSQL;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(long long)nextPersistentID;
-(void)_calculateNewRun;
@end

