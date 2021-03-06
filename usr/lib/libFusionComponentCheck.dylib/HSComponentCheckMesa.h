/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libFusionComponentCheck.dylib/HSComponentCheckBase.h>

@class NSString;

@interface HSComponentCheckMesa : HSComponentCheckBase {

	NSString* currentNvSn;
	NSString* currentBBUniqueChipId;
	NSString* currentBBSerialNo;

}
+(id)sharedSingleton;
-(id)init;
-(id)querySN;
-(id)getMesaSensorSerialNumber:(id)arg1 ;
-(id)getUniqueChipId:(id*)arg1 ;
-(id)getUniqueDeviceId:(id*)arg1 ;
@end

