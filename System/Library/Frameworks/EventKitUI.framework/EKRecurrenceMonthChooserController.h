/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet, NSArray;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _monthsOfTheYearSet;
	BOOL _prohibitsMultipleMonthsInYearlyRecurrence;

}

@property (nonatomic,retain) NSArray * monthsOfTheYear; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;              //@synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence - In the implementation block
-(NSArray *)monthsOfTheYear;
-(void)prepareForDisplay;
-(long long)frequency;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)tableViewCell;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
@end
