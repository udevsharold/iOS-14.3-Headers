/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell {

	NSAttributedString* _attributedButtonText;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText;              //@synthesize attributedButtonText=_attributedButtonText - In the implementation block
-(NSAttributedString *)attributedButtonText;
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(void)layoutSubviewsForAlignmentContents;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
@end
