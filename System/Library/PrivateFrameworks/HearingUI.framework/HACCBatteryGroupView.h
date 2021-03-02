/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView {

	HACCBatteryView* _topBatteryView;
	HACCBatteryView* _bottomBatteryView;

}

@property (nonatomic,retain) HACCBatteryView * topBatteryView;                 //@synthesize topBatteryView=_topBatteryView - In the implementation block
@property (nonatomic,retain) HACCBatteryView * bottomBatteryView;              //@synthesize bottomBatteryView=_bottomBatteryView - In the implementation block
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTopBatteryView:(HACCBatteryView *)arg1 ;
-(void)setBottomBatteryView:(HACCBatteryView *)arg1 ;
-(void)updateValueForLeft:(double)arg1 right:(double)arg2 andAvailableEars:(int)arg3 ;
-(HACCBatteryView *)topBatteryView;
-(HACCBatteryView *)bottomBatteryView;
-(void)updateValueForDevice:(id)arg1 ;
@end
