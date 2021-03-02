/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject {

	NSArray* _viewAnimations;
	long long _animationCount;
	/*^block*/id _completionHandler;
	UITableViewCell* _swipeToDeleteCell;

}

@property (nonatomic,retain) NSArray * viewAnimations;                         //@synthesize viewAnimations=_viewAnimations - In the implementation block
@property (assign,nonatomic) long long animationCount;                         //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UITableViewCell * swipeToDeleteCell;              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
-(id)completionHandler;
-(NSArray *)viewAnimations;
-(void)setSwipeToDeleteCell:(UITableViewCell *)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(UITableViewCell *)swipeToDeleteCell;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
@end
