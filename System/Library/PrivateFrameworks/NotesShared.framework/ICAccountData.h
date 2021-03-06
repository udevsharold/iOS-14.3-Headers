/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, ICAccount, NSData;

@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSData * mergeableData; 
+(id)newAccountDataForAccount:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newAccountDataWithIdentifier:(id)arg1 account:(id)arg2 ;
+(id)accountDataWithIdentifier:(id)arg1 context:(id)arg2 ;
-(id)recordType;
-(id)cloudAccount;
-(id)recordZoneName;
-(BOOL)isDeletable;
-(void)saveMergeableDataIfNeeded;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(BOOL)needsToBeDeletedFromCloud;
-(id)newlyCreatedRecord;
-(id)recordName;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
@end

