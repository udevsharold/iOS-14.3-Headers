/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {

	CGPoint _framelocation;
	double _radiusInt;
	BOOL _unknownSeen;
	UILabel* _fingerLabel;
	_UIKBRTFingerDetectionFingerCircleView* _fingerDot;

}

@property (nonatomic,retain) UILabel * fingerLabel;                                           //@synthesize fingerLabel=_fingerLabel - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetectionFingerCircleView * fingerDot;              //@synthesize fingerDot=_fingerDot - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                                                //@synthesize unknownSeen=_unknownSeen - In the implementation block
-(double)radius;
-(void)setNeedsDisplay;
-(void)setFingerLabel:(UILabel *)arg1 ;
-(void)setFingerDot:(_UIKBRTFingerDetectionFingerCircleView *)arg1 ;
-(_UIKBRTFingerDetectionFingerCircleView *)fingerDot;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)unknownSeen;
-(UILabel *)fingerLabel;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(void)centerOn:(CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3 ;
@end

