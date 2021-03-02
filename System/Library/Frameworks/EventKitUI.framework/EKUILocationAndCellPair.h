/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKStructuredLocation, UITableViewCell;

@interface EKUILocationAndCellPair : NSObject {

	EKStructuredLocation* _location;
	UITableViewCell* _cell;

}

@property (retain) EKStructuredLocation * location;              //@synthesize location=_location - In the implementation block
@property (retain) UITableViewCell * cell;                       //@synthesize cell=_cell - In the implementation block
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(EKStructuredLocation *)location;
-(id)description;
-(void)setLocation:(EKStructuredLocation *)arg1 ;
@end
