/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton {

	BOOL _derivesTitleColorFromTintColor;
	BOOL _derivesBackgroundColorFromTintColor;
	NSMutableDictionary* _backgroundColorsByState;

}

@property (nonatomic,retain) NSMutableDictionary * backgroundColorsByState;              //@synthesize backgroundColorsByState=_backgroundColorsByState - In the implementation block
@property (assign,nonatomic) BOOL derivesTitleColorFromTintColor;                        //@synthesize derivesTitleColorFromTintColor=_derivesTitleColorFromTintColor - In the implementation block
@property (assign,nonatomic) BOOL derivesBackgroundColorFromTintColor;                   //@synthesize derivesBackgroundColorFromTintColor=_derivesBackgroundColorFromTintColor - In the implementation block
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDerivesBackgroundColorFromTintColor:(BOOL)arg1 ;
-(void)setDerivesTitleColorFromTintColor:(BOOL)arg1 ;
-(NSMutableDictionary *)backgroundColorsByState;
-(void)updateBackgroundColorAnimated:(BOOL)arg1 ;
-(BOOL)derivesTitleColorFromTintColor;
-(BOOL)derivesBackgroundColorFromTintColor;
-(void)setBackgroundColorsByState:(NSMutableDictionary *)arg1 ;
@end
