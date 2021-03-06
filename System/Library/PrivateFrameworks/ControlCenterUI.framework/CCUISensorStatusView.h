/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CCUISensorStatusButton;

@interface CCUISensorStatusView : UIView {

	BOOL _displayingSensorStatus;
	CCUISensorStatusButton* _cameraSensorStatusButton;
	CCUISensorStatusButton* _micSensorStatusButton;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) CCUISensorStatusButton * cameraSensorStatusButton;                        //@synthesize cameraSensorStatusButton=_cameraSensorStatusButton - In the implementation block
@property (nonatomic,retain) CCUISensorStatusButton * micSensorStatusButton;                           //@synthesize micSensorStatusButton=_micSensorStatusButton - In the implementation block
@property (assign,getter=isDisplayingSensorStatus,nonatomic) BOOL displayingSensorStatus;              //@synthesize displayingSensorStatus=_displayingSensorStatus - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isDisplayingSensorStatus;
-(void)_openPreferencesForBundleIdentifier:(id)arg1 ;
-(CCUISensorStatusButton *)cameraSensorStatusButton;
-(void)layoutSubviews;
-(void)configureStatusForSensorType:(unsigned long long)arg1 sensorActivityData:(id)arg2 ;
-(CCUISensorStatusButton *)micSensorStatusButton;
-(void)_handleSensorStatusButtonTap:(id)arg1 ;
-(void)setDisplayingSensorStatus:(BOOL)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)resetStatusForSensorType:(unsigned long long)arg1 ;
-(void)setMicSensorStatusButton:(CCUISensorStatusButton *)arg1 ;
-(void)setCameraSensorStatusButton:(CCUISensorStatusButton *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

