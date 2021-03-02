/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDragAnimating.h>

@class UIDragItem, NSMutableArray, NSString;

@interface _UITableViewDropAnimation : NSObject <UIDragAnimating> {

	BOOL _didBeginAnimation;
	UIDragItem* _dragItem;
	NSMutableArray* _animationsBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,retain) UIDragItem * dragItem;                                                                       //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationsBlocks;                                                           //@synthesize animationsBlocks=_animationsBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                                           //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign,setter=_setDidBeginAnimation:,getter=_didBeginAnimation,nonatomic) BOOL didBeginAnimation;              //@synthesize didBeginAnimation=_didBeginAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(UIDragItem *)dragItem;
-(NSMutableArray *)completionBlocks;
-(void)_setDidBeginAnimation:(BOOL)arg1 ;
-(void)_addClientBlocksToAnimator:(id)arg1 ;
-(id)initWithDragItem:(id)arg1 ;
-(BOOL)_didBeginAnimation;
-(NSMutableArray *)animationsBlocks;
-(void)setAnimationsBlocks:(NSMutableArray *)arg1 ;
-(void)_executeCompletionBlocks;
-(void)setDragItem:(UIDragItem *)arg1 ;
@end
