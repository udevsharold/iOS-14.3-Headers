/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCFeedRefreshSession, NSArray, FCFeedGroup, NSSet, FCCloudContext, FCFeedDescriptor, FCFeedGroupEmittingContext;

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation {

	FCFeedRefreshSession* _resultRefreshSession;
	NSArray* _resultUpdatedRefreshSessions;
	FCFeedGroup* _resultInsertedGroup;
	NSSet* _resultDeletedElementIDs;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedDescriptor* _feedDescriptor;
	FCFeedRefreshSession* _refreshSession;
	NSArray* _feedGroupEmitters;
	FCFeedGroupEmittingContext* _groupEmittingContext;
	NSArray* _internalElements;
	/*^block*/id _insertGroupCompletionHandler;

}

@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                              //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                          //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSArray * feedGroupEmitters;                                    //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingContext * groupEmittingContext;              //@synthesize groupEmittingContext=_groupEmittingContext - In the implementation block
@property (nonatomic,retain) NSArray * internalElements;                                     //@synthesize internalElements=_internalElements - In the implementation block
@property (nonatomic,copy) id insertGroupCompletionHandler;                                  //@synthesize insertGroupCompletionHandler=_insertGroupCompletionHandler - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(FCFeedRefreshSession *)refreshSession;
-(void)setInsertGroupCompletionHandler:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)_nextGroupToInsert:(id*)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(FCFeedGroupEmittingContext *)groupEmittingContext;
-(NSArray *)internalElements;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id)insertGroupCompletionHandler;
-(void)setGroupEmittingContext:(FCFeedGroupEmittingContext *)arg1 ;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3 ;
-(NSArray *)feedGroupEmitters;
-(FCCloudContext *)context;
-(void)setInternalElements:(NSArray *)arg1 ;
@end

