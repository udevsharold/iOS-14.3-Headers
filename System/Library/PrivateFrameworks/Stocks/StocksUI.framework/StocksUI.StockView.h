/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TSAXCustomReorderMessaging.h>

@class NSString;

@interface StocksUI.StockView : UIView <TSAXCustomReorderMessaging> {

	 symbolLabel;
	 companyLabel;
	 companyLabelLong;
	 exchangeLabel;
	 priceLabel;
	 priceChangeButton;
	 sparklineView;
	 axElement;
	 isSelected;
	 revision;
	 isEditing;

}

@property (readonly,nonatomic) NSString * tsaxAccessibilityLabelForReordering; 
-(NSString *)tsaxAccessibilityLabelForReordering;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

