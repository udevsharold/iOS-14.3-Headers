/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSURL;

@interface PrefsUILinkLabel : UILabel {

	NSURL* _url;
	BOOL _touchingURL;
	NSURL* _URL;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)openURL:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)target;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setAction:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tappedLink:(id)arg1 ;
-(SEL)action;
-(id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2 ;
-(NSURL *)URL;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

