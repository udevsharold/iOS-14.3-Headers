/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKSearchTargetProvider <NSObject>
@required
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;

@end
