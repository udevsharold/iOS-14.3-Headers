/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAShapeLayer;

@interface CKLineView : UIView {

	BOOL _shouldUseDarkFSMStrokeColor;
	CABackdropLayer* _backdropFilterLayer;
	CAShapeLayer* _lineShapeLayer;

}

@property (nonatomic,retain) CABackdropLayer * backdropFilterLayer;              //@synthesize backdropFilterLayer=_backdropFilterLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * lineShapeLayer;                      //@synthesize lineShapeLayer=_lineShapeLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDarkFSMStrokeColor;                   //@synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor - In the implementation block
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backdropFilterLayer;
-(CAShapeLayer *)lineShapeLayer;
-(void)setLineShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setShouldUseDarkFSMStrokeColor:(BOOL)arg1 ;
-(BOOL)shouldUseDarkFSMStrokeColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end
