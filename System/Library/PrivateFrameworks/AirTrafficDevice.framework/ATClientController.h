/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(id)queueForClient:(id)arg1 ;
-(void)dealloc;
-(BOOL)_loadClientsForDataclasses:(id)arg1 ;
-(id)allClients;
-(void)waitToDrain;
-(void)resetQueues;
-(id)clientForDataclass:(id)arg1 ;
@end

