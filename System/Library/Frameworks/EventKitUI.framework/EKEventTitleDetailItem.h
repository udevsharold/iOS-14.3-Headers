/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class EKEventDetailTitleCell, UIColor, NSDate, NSObject, UIView;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	EKEventDetailTitleCell* _cell;
	UIColor* _color;
	BOOL _showDot;
	BOOL _cellNeedsUpdate;
	BOOL _hidesSeparator;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSDate* _proposedTime;
	NSObject*<EKEventTitleDetailItemDelegate> _editDelegate;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic) BOOL hidesSeparator;                                                        //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,retain) NSDate * proposedTime;                                                      //@synthesize proposedTime=_proposedTime - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForPopover; 
@property (assign,nonatomic,__weak) NSObject*<EKEventTitleDetailItemDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                     //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                                      //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
-(void)editButtonPressed;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(NSDate *)proposedTime;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)titleHeight;
-(void)reset;
-(void)predictionWasActedOn;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(void)setProposedTime:(NSDate *)arg1 ;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)refreshCopiedEvents;
-(UIView *)sourceViewForPopover;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(NSObject*<EKEventTitleDetailItemDelegate>)editDelegate;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)hidesSeparator;
-(BOOL)minimalMode;
-(void)setCellPosition:(int)arg1 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(unsigned long long)numberOfTitleLines;
-(void)setEditDelegate:(NSObject*<EKEventTitleDetailItemDelegate>)arg1 ;
@end
