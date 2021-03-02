/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

@interface UITableViewLabel : UILabel {

	long long _savedNumberOfLines;
	double _firstParagraphFirstLineHeadIndent;
	NSAttributedString* _shadowAttributedText;
	BOOL _usingDefaultFont;
	UITableViewCell* _tableCell;

}

@property (assign,nonatomic,__weak) UITableViewCell * tableCell;              //@synthesize tableCell=_tableCell - In the implementation block
@property (nonatomic,readonly) BOOL usingDefaultFont;                         //@synthesize usingDefaultFont=_usingDefaultFont - In the implementation block
-(void)setAttributedText:(id)arg1 ;
-(void)_cleanupErrantFirstLineHeadIndent;
-(void)_clearNumberOfLines;
-(void)setFont:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(void)setText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_restoreNumberOfLines;
-(void)_setFirstParagraphFirstLineHeadIndent:(double)arg1 ;
-(void)_setDefaultFont:(id)arg1 ;
-(void)setTableCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)tableCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_disabledFontColor;
-(BOOL)usingDefaultFont;
-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1 ;
@end
