/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUTitleValueCell.h>

@class HUDynamicAlignmentTitleValueCellLayoutOptions;

@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell {

	HUDynamicAlignmentTitleValueCellLayoutOptions* _layoutOptions;

}

@property (nonatomic,retain) HUDynamicAlignmentTitleValueCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(void)setLayoutOptions:(HUDynamicAlignmentTitleValueCellLayoutOptions *)arg1 ;
-(HUDynamicAlignmentTitleValueCellLayoutOptions *)layoutOptions;
-(void)_ensureCorrectHeaderViewOrientation;
-(BOOL)useVerticalLayout;
@end
