/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchShareParticipantKeyOperationCallbacks.h>

@class NSDictionary, NSArray, NSMutableDictionary, CKFetchShareParticipantKeyOperationInfo;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation <CKFetchShareParticipantKeyOperationCallbacks> {

	/*^block*/id _shareParticipantKeyFetchedBlock;
	/*^block*/id _shareParticipantKeyCompletionBlock;
	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSArray* _shareIDs;
	NSMutableDictionary* _errorsByShareID;

}

@property (nonatomic,copy) NSArray * shareIDs;                                                                             //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByShareID;                                                        //@synthesize errorsByShareID=_errorsByShareID - In the implementation block
@property (nonatomic,readonly) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchShareParticipantKeyOperationInfo * operationInfo; 
@property (nonatomic,copy) NSDictionary * baseTokensByShareID;                                                             //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,copy) NSDictionary * childRecordIDsByShareID;                                                         //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyFetchedBlock;                                                             //@synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyCompletionBlock;                                                          //@synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSArray *)shareIDs;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setShareIDs:(NSArray *)arg1 ;
-(NSMutableDictionary *)errorsByShareID;
-(NSDictionary *)baseTokensByShareID;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(NSDictionary *)childRecordIDsByShareID;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
-(id)shareParticipantKeyFetchedBlock;
-(id)shareParticipantKeyCompletionBlock;
-(void)setErrorsByShareID:(NSMutableDictionary *)arg1 ;
-(void)setShareParticipantKeyCompletionBlock:(id)arg1 ;
-(void)setShareParticipantKeyFetchedBlock:(id)arg1 ;
-(id)initWithShareIDs:(id)arg1 ;
-(void)handleParticipantKeyFetchForRecordID:(id)arg1 participantKey:(id)arg2 error:(id)arg3 ;
-(id)activityCreate;
-(void)performCKOperation;
@end
