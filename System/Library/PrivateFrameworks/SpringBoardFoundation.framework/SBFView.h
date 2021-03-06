/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBFView : UIView {

	NSArray* _animatedLayerProperties;
	/*^block*/id _didMoveToWindowHandler;
	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;                  //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
@property (nonatomic,copy) NSArray * animatedLayerProperties;              //@synthesize animatedLayerProperties=_animatedLayerProperties - In the implementation block
@property (nonatomic,copy) id didMoveToWindowHandler;                      //@synthesize didMoveToWindowHandler=_didMoveToWindowHandler - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)didMoveToWindowHandler;
-(NSArray *)animatedLayerProperties;
-(void)setAnimatedLayerProperties:(NSArray *)arg1 ;
-(void)setDidMoveToWindowHandler:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(void)didMoveToWindow;
@end

