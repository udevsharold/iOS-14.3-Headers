/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIPlatterView;

@interface _UIPlatterContainerView : UIView {

	UIView* _updatedTargetWrapper;
	_UIPlatterView* _source;
	_UIPlatterView* _target;
	_UIPlatterView* _updatedTarget;

}

@property (nonatomic,retain) _UIPlatterView * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) _UIPlatterView * target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) _UIPlatterView * updatedTarget;              //@synthesize updatedTarget=_updatedTarget - In the implementation block
-(_UIPlatterView *)target;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTarget:(_UIPlatterView *)arg1 ;
-(_UIPlatterView *)updatedTarget;
-(_UIPlatterView *)source;
-(void)setFrame:(CGRect)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2 ;
-(void)setUpdatedTarget:(_UIPlatterView *)arg1 ;
-(void)applyRotation:(double)arg1 ;
-(void)_updateTransforms;
-(void)setSource:(_UIPlatterView *)arg1 ;
@end
