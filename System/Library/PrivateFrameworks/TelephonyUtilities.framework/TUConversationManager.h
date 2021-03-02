/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUConversationManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUConversationManagerDataSource;
@class TUConversationMediaController, NSObject, NSMapTable, NSSet, NSString;

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate> {

	TUConversationMediaController* _mediaController;
	NSObject*<OS_dispatch_queue> _queue;
	id<TUConversationManagerDataSource> _dataSource;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUConversationManagerDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                                 //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) TUConversationMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeConversations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowsVideo;
+(BOOL)isAddPersonEnabled;
+(unsigned long long)maximumNumberOfInvitedMembers;
+(BOOL)supportsEffects;
+(BOOL)supportsConversations;
+(long long)memorySize;
-(NSMapTable *)delegateToQueue;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(NSSet *)activeConversations;
-(id)init;
-(void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2 ;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2 ;
-(void)dealloc;
-(TUConversationMediaController *)mediaController;
-(void)serverDisconnectedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2 ;
-(void)buzzMember:(id)arg1 conversation:(id)arg2 ;
-(id)activeConversationWithGroupUUID:(id)arg1 ;
-(id<TUConversationManagerDataSource>)dataSource;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)activeConversationWithRemoteMembers:(id)arg1 ;
@end
