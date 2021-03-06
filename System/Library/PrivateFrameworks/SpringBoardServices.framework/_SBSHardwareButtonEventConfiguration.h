/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SBSHardwareButtonEventConfiguration : NSObject {

	unsigned long long _eventMask;
	long long _maximumPriority;

}

@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long maximumPriority;                 //@synthesize maximumPriority=_maximumPriority - In the implementation block
-(unsigned long long)eventMask;
-(long long)maximumPriority;
-(id)description;
-(void)setEventMask:(unsigned long long)arg1 ;
-(void)setMaximumPriority:(long long)arg1 ;
@end

