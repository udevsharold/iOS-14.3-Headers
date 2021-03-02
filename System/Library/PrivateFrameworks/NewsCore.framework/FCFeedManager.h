/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFeedPersonalizing, OS_dispatch_group;
@class FCCloudContext, NSMapTable, NFMutexLock, NSObject;

@interface FCFeedManager : NSObject {

	id<FCFeedPersonalizing> _feedPersonalizer;
	long long _savedStoriesCount;
	FCCloudContext* _context;
	NSMapTable* _feedDescriptorsByID;
	NFMutexLock* _feedDescriptorsLock;
	NSObject*<OS_dispatch_group> _forYouPrefetchGroup;

}

@property (nonatomic,retain) FCCloudContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSMapTable * feedDescriptorsByID;                              //@synthesize feedDescriptorsByID=_feedDescriptorsByID - In the implementation block
@property (nonatomic,retain) NFMutexLock * feedDescriptorsLock;                             //@synthesize feedDescriptorsLock=_feedDescriptorsLock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> forYouPrefetchGroup;              //@synthesize forYouPrefetchGroup=_forYouPrefetchGroup - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;                      //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (assign,nonatomic) long long savedStoriesCount;                                   //@synthesize savedStoriesCount=_savedStoriesCount - In the implementation block
+(id)_identifierForFeedName:(id)arg1 ;
+(id)feedDescriptorNameForForYou;
+(id)feedDescriptorNameForReadingList;
+(id)feedDescriptorNameForReadingHistory;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(void)setFeedDescriptorsByID:(NSMapTable *)arg1 ;
-(id)init;
-(void)notifyWhenForYouPrefetchIsCompleteWithBlock:(/*^block*/id)arg1 ;
-(id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1 ;
-(NFMutexLock *)feedDescriptorsLock;
-(void)setSavedStoriesCount:(long long)arg1 ;
-(long long)savedStoriesCount;
-(id)feedDescriptorForReadingHistory;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id)feedDescriptorForReadingList;
-(void)setForYouPrefetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setFeedDescriptorsLock:(NFMutexLock *)arg1 ;
-(NSObject*<OS_dispatch_group>)forYouPrefetchGroup;
-(NSMapTable *)feedDescriptorsByID;
-(id)feedDescriptorWithIdentifier:(id)arg1 ;
-(id)initWithCloudContext:(id)arg1 ;
-(id)feedDescriptorForForYou;
-(FCCloudContext *)context;
-(id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(BOOL)arg2 tag:(id)arg3 ;
-(id)feedDescriptorForTag:(id)arg1 ;
-(void)prefetchForYouWithHighPriority:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
