/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSNumber, NSMutableArray;

@interface STHorizontallySegmentedView : UIView {

	BOOL _useVibrancy;
	BOOL _truncateLabels;
	NSArray* _segmentItems;
	NSNumber* _numberOfLines;
	unsigned long long _maximumNumberOfLines;
	double _previousWidth;
	NSMutableArray* _segmentViews;
	NSArray* _segmentConstraints;

}

@property (nonatomic,retain) NSNumber * numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (readonly) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (readonly) BOOL useVibrancy;                                     //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (readonly) BOOL truncateLabels;                                  //@synthesize truncateLabels=_truncateLabels - In the implementation block
@property (assign,nonatomic) double previousWidth;                         //@synthesize previousWidth=_previousWidth - In the implementation block
@property (nonatomic,readonly) NSMutableArray * segmentViews;              //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,copy) NSArray * segmentConstraints;                   //@synthesize segmentConstraints=_segmentConstraints - In the implementation block
@property (nonatomic,copy) NSArray * segmentItems;                         //@synthesize segmentItems=_segmentItems - In the implementation block
-(id)init;
-(void)setSegmentItems:(NSArray *)arg1 ;
-(BOOL)truncateLabels;
-(void)_setUpConstraints;
-(void)setPreviousWidth:(double)arg1 ;
-(void)setNumberOfLines:(NSNumber *)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(NSNumber *)numberOfLines;
-(NSMutableArray *)segmentViews;
-(id)initWithCoder:(id)arg1 ;
-(double)previousWidth;
-(void)layoutSubviews;
-(void)_stHorizontallySegmentedViewCommonInit;
-(NSArray *)segmentConstraints;
-(void)setSegmentConstraints:(NSArray *)arg1 ;
-(id)initWithVibrancy:(BOOL)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(BOOL)arg3 ;
-(NSArray *)segmentItems;
-(BOOL)useVibrancy;
@end
