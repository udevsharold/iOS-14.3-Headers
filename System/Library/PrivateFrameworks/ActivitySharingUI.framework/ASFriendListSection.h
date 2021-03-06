/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface ASFriendListSection : NSObject {

	NSDate* _startDate;
	NSArray* _rows;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSArray * rows;                  //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) NSDate * endDate; 
-(NSArray *)rows;
-(NSDate *)endDate;
-(void)setRows:(NSArray *)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 andRows:(id)arg2 ;
-(BOOL)containsFriendListRow:(id)arg1 ;
@end

