/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface WFTextEditingHintView : UIView {

	NSString* _hintText;
	UIView* _backgroundView;
	UILabel* _hintLabel;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                  //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,copy) NSString * hintText;                           //@synthesize hintText=_hintText - In the implementation block
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)hintLabel;
-(UIView *)backgroundView;
-(void)setHintLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHintText:(NSString *)arg1 ;
-(NSString *)hintText;
@end

