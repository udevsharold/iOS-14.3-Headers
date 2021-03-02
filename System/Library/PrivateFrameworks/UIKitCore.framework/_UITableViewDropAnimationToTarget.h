/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewTarget, UITableViewCell;

@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation {

	BOOL _didSearchForCell;
	UIDragPreviewTarget* _target;
	UITableViewCell* _cell;

}

@property (nonatomic,retain) UIDragPreviewTarget * target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) BOOL didSearchForCell;                     //@synthesize didSearchForCell=_didSearchForCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;                    //@synthesize cell=_cell - In the implementation block
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UIDragPreviewTarget *)target;
-(BOOL)didSearchForCell;
-(void)setDidSearchForCell:(BOOL)arg1 ;
-(id)cellForTargetContainerInTableView:(id)arg1 ;
-(void)setTarget:(UIDragPreviewTarget *)arg1 ;
-(id)initWithDragItem:(id)arg1 target:(id)arg2 ;
@end
