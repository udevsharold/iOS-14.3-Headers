/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface CLKGaugeSegment : NSObject {

	UIColor* _color;
	long long _state;

}

@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long state;                //@synthesize state=_state - In the implementation block
-(UIColor *)color;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithColor:(id)arg1 state:(long long)arg2 ;
@end
