/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton;

@interface BFFLinkHandler : NSObject {

	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(id)init;
-(void)buttonPressed:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
@end

