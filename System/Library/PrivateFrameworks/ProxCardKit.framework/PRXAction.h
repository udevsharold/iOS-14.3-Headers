/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIButton;

@interface PRXAction : NSObject {

	/*^block*/id _handler;
	BOOL _enabled;
	BOOL _usesLegacyStyling;
	NSString* _title;
	long long _style;
	UIButton* _button;

}

@property (assign,nonatomic) BOOL usesLegacyStyling;                     //@synthesize usesLegacyStyling=_usesLegacyStyling - In the implementation block
@property (assign,nonatomic,__weak) UIButton * button;                   //@synthesize button=_button - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)defaultDismissalActionForViewController:(id)arg1 ;
+(id)dismissalConfirmationActionForViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 confirmButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_callHandler;
-(BOOL)isEnabled;
-(long long)style;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(BOOL)usesLegacyStyling;
-(void)setUsesLegacyStyling:(BOOL)arg1 ;
@end
