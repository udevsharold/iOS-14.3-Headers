/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBluetoothManagerNotificationCarKitConnectionStateChanged : RTNotification {

	long long _carKitConnectionState;

}

@property (nonatomic,readonly) long long carKitConnectionState;              //@synthesize carKitConnectionState=_carKitConnectionState - In the implementation block
-(id)initWithCarKitConnectionState:(long long)arg1 ;
-(long long)carKitConnectionState;
@end
