/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:30:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {

	NSDate* _endDate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_cancel;
-(void)_start;
-(void)_getEndDate;
-(void)_invokeHandler;
@end

