/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXHADeviceControllerProtocol <NSObject>
@required
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1;
-(void)stopPropertyUpdates;

@end

