/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TRISQLiteCKDatabase, NSString, CKDatabase;

@interface TRISQLiteCKContainer : NSObject {

	TRISQLiteCKDatabase* _database;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CKDatabase * privateCloudDatabase; 
@property (nonatomic,readonly) CKDatabase * publicCloudDatabase; 
@property (nonatomic,readonly) CKDatabase * sharedCloudDatabase; 
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(NSString *)containerIdentifier;
-(CKDatabase *)privateCloudDatabase;
-(CKDatabase *)publicCloudDatabase;
-(CKDatabase *)sharedCloudDatabase;
-(id)initWithContainerIdentifier:(id)arg1 database:(id)arg2 ;
@end

