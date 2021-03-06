/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation {

	BOOL _deleteZones;
	BOOL _restoreSecureSentinel;
	BOOL _restoreZoneContents;
	FCCKPrivateDatabase* _database;
	/*^block*/id _resetCompletionHandler;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL deleteZones;                            //@synthesize deleteZones=_deleteZones - In the implementation block
@property (assign,nonatomic) BOOL restoreSecureSentinel;                  //@synthesize restoreSecureSentinel=_restoreSecureSentinel - In the implementation block
@property (assign,nonatomic) BOOL restoreZoneContents;                    //@synthesize restoreZoneContents=_restoreZoneContents - In the implementation block
@property (nonatomic,copy) id resetCompletionHandler;                     //@synthesize resetCompletionHandler=_resetCompletionHandler - In the implementation block
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(FCCKPrivateDatabase *)database;
-(void)performOperation;
-(id)init;
-(void)setDeleteZones:(BOOL)arg1 ;
-(id)_deleteZones;
-(void)setRestoreSecureSentinel:(BOOL)arg1 ;
-(void)setRestoreZoneContents:(BOOL)arg1 ;
-(void)setResetCompletionHandler:(id)arg1 ;
-(id)_recreateZones;
-(id)_restoreSecureSentinel;
-(id)_restoreZoneContents;
-(id)resetCompletionHandler;
-(BOOL)deleteZones;
-(id)_rawZoneIDsToDelete;
-(id)_rawZonesToRecreate;
-(BOOL)restoreSecureSentinel;
-(BOOL)restoreZoneContents;
-(id)_rawRecordsToSave;
@end

