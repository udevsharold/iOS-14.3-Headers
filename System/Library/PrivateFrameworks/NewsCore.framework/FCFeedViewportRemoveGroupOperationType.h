/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCFeedViewport, NSString, FCFeedDescriptor;


@protocol FCFeedViewportRemoveGroupOperationType <NSObject>
@property (nonatomic,retain) FCFeedViewport * viewport; 
@property (nonatomic,retain) NSString * groupID; 
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor; 
@property (nonatomic,copy) id removeGroupCompletionHandler; 
@required
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(id)arg1;
-(void)setViewport:(id)arg1;
-(FCFeedViewport *)viewport;
-(void)setGroupID:(id)arg1;
-(id)removeGroupCompletionHandler;
-(void)setRemoveGroupCompletionHandler:(/*^block*/id)arg1;
-(void)start;
-(NSString *)groupID;

@end

