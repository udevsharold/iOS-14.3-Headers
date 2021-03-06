/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView {

	EKLegacyUIListHeaderCellContentView* _contentView;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
@property (nonatomic,readonly) BOOL reusable; 
@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
+(id)_allDayLocalizedString;
+(void)_invalidateWidths;
+(void)_calculateWidths;
+(double)xMidpointForCalendarDot;
+(double)timeWidthIncludingDots:(BOOL)arg1 ;
+(id)_noonLocalizedString;
-(void)setNeedsDisplay;
-(double)date;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)reusable;
@end

