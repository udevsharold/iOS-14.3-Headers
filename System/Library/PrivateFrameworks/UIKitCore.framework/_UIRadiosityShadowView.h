/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, CALayer;

@interface _UIRadiosityShadowView : UIView {

	BOOL _needsPunchout;
	UIBezierPath* _shadowPath;
	CALayer* _punchoutLayer;

}

@property (nonatomic,retain) UIBezierPath * shadowPath;              //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,retain) CALayer * punchoutLayer;                //@synthesize punchoutLayer=_punchoutLayer - In the implementation block
@property (assign,nonatomic) BOOL needsPunchout;                     //@synthesize needsPunchout=_needsPunchout - In the implementation block
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)shadowPath;
-(CALayer *)punchoutLayer;
-(void)setPunchoutLayer:(CALayer *)arg1 ;
-(BOOL)needsPunchout;
-(id)initWithSourceView:(id)arg1 shadowPath:(id)arg2 isSoft:(BOOL)arg3 ;
-(void)setNeedsPunchout:(BOOL)arg1 ;
@end

