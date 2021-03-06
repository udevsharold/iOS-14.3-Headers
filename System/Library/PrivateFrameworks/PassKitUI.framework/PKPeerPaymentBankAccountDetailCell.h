/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell {

	BOOL _shouldDrawSeperator;
	BOOL _shouldDrawFullWidthSeperator;
	double _minimumTextLabelWidth;

}

@property (assign,nonatomic) BOOL shouldDrawSeperator;                       //@synthesize shouldDrawSeperator=_shouldDrawSeperator - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawFullWidthSeperator;              //@synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator - In the implementation block
@property (assign,nonatomic) double minimumTextLabelWidth;                   //@synthesize minimumTextLabelWidth=_minimumTextLabelWidth - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setShouldDrawFullWidthSeperator:(BOOL)arg1 ;
-(void)setShouldDrawSeperator:(BOOL)arg1 ;
-(BOOL)shouldDrawSeperator;
-(BOOL)shouldDrawFullWidthSeperator;
-(double)minimumTextLabelWidth;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(CGRect)_separatorFrame;
@end

