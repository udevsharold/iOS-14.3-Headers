/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CPSNavigationAlertProgressView : UIView {

	BOOL _hasStartedAnimating;
	double _duration;
	UIView* _progressView;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) UIView * progressView;                 //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) BOOL hasStartedAnimating;              //@synthesize hasStartedAnimating=_hasStartedAnimating - In the implementation block
-(void)setDuration:(double)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(double)duration;
-(void)startAnimating;
-(id)initWithFrame:(CGRect)arg1 duration:(double)arg2 ;
-(BOOL)hasStartedAnimating;
-(void)setHasStartedAnimating:(BOOL)arg1 ;
@end
