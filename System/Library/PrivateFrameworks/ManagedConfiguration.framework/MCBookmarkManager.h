/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary;

@interface MCBookmarkManager : NSObject {

	int _notificationToken;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSArray* _memberQueueCurrentUserBookmarks;
	NSDictionary* _memberQueueStashedBookmarksByLabel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSArray * memberQueueCurrentUserBookmarks;                      //@synthesize memberQueueCurrentUserBookmarks=_memberQueueCurrentUserBookmarks - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueStashedBookmarksByLabel;              //@synthesize memberQueueStashedBookmarksByLabel=_memberQueueStashedBookmarksByLabel - In the implementation block
@property (assign,nonatomic) int notificationToken;                                          //@synthesize notificationToken=_notificationToken - In the implementation block
@property (nonatomic,copy) NSArray * userBookmarks; 
+(id)sharedManager;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUserBookmarks:(NSArray *)arg1 ;
-(NSArray *)userBookmarks;
-(int)notificationToken;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(id)init;
-(void)memberQueueSetUserBookmarks:(id)arg1 ;
-(void)memberQueueRereadBookmarks;
-(NSArray *)memberQueueCurrentUserBookmarks;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1 ;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)setMemberQueueCurrentUserBookmarks:(NSArray *)arg1 ;
-(NSDictionary *)memberQueueStashedBookmarksByLabel;
-(void)setMemberQueueStashedBookmarksByLabel:(NSDictionary *)arg1 ;
-(void)setNotificationToken:(int)arg1 ;
@end

