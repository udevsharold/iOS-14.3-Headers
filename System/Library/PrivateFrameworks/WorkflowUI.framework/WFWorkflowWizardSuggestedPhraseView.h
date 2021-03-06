/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;
@class NSString, UILabel;

@interface WFWorkflowWizardSuggestedPhraseView : UIView {

	id<WFWorkflowWizardSuggestedPhraseViewDelegate> _delegate;
	NSString* _suggestedPhrase;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UILabel * label;                                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardSuggestedPhraseViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestedPhrase;                                            //@synthesize suggestedPhrase=_suggestedPhrase - In the implementation block
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)highlight;
-(void)unhighlight;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)suggestedPhrase;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)arg1 ;
-(UILabel *)label;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<WFWorkflowWizardSuggestedPhraseViewDelegate>)delegate;
-(void)fadeOutHighlight;
-(id)initWithSuggestedPhrase:(id)arg1 ;
@end

