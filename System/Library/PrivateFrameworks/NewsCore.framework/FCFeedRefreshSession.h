/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFeedRefreshSessionForYouConfig;
@class NSString, NSDate, NSDictionary, NSArray, NSSet, FCFeedEdition;

@interface FCFeedRefreshSession : NSObject {

	BOOL _reachedEnd;
	BOOL _isOffline;
	BOOL _isNewEdition;
	NSString* _identifier;
	NSDate* _refreshDate;
	NSDate* _modificationDate;
	NSDictionary* _cursorsByGroupEmitterID;
	NSArray* _pendingGroups;
	NSSet* _activeGroupEmitterIDs;
	FCFeedEdition* _lastCompletedEdition;
	id<FCFeedRefreshSessionForYouConfig> _forYouConfig;

}

@property (nonatomic,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                                //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cursorsByGroupEmitterID;                         //@synthesize cursorsByGroupEmitterID=_cursorsByGroupEmitterID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingGroups;                                        //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeGroupEmitterIDs;                                  //@synthesize activeGroupEmitterIDs=_activeGroupEmitterIDs - In the implementation block
@property (nonatomic,readonly) FCFeedEdition * lastCompletedEdition;                                //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,readonly) BOOL reachedEnd;                                                     //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) BOOL isOffline;                                                      //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,copy,readonly) id<FCFeedRefreshSessionForYouConfig> forYouConfig;              //@synthesize forYouConfig=_forYouConfig - In the implementation block
@property (nonatomic,readonly) BOOL isNewEdition;                                                   //@synthesize isNewEdition=_isNewEdition - In the implementation block
+(id)currentEditionWithRefreshDate:(id)arg1 lastCompletedEdition:(id)arg2 fromPaginator:(id)arg3 ;
-(NSArray *)pendingGroups;
-(BOOL)isOffline;
-(NSDate *)modificationDate;
-(BOOL)reachedEnd;
-(id<FCFeedRefreshSessionForYouConfig>)forYouConfig;
-(id)currentEditionFromPaginator:(id)arg1 ;
-(NSSet *)activeGroupEmitterIDs;
-(id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2 ;
-(FCFeedEdition *)lastCompletedEdition;
-(BOOL)isNewEdition;
-(NSDate *)refreshDate;
-(id)copyWithAllGroupEmittersExhausted;
-(id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(BOOL)arg8 isOffline:(BOOL)arg9 forYouConfig:(id)arg10 ;
-(id)copyByRemovingPendingGroupsAtIndexes:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyByRemovingPendingGroupIdenticalTo:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(BOOL)arg6 isOffline:(BOOL)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)cursorsByGroupEmitterID;
-(id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2 ;
-(id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(BOOL)arg3 forYouConfig:(id)arg4 ;
@end
