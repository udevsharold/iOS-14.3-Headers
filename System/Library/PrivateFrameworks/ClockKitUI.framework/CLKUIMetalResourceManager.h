/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/CLKUIResourceManager.h>

@protocol MTLDevice, MTLTexture;
@interface CLKUIMetalResourceManager : CLKUIResourceManager {

	id<MTLDevice> _device;
	id<MTLTexture> _nilTexture;

}
+(id)sharedCommandQueue;
+(id)sharedDevice;
+(id)sharedMetalInstance;
+(id)sharedNilTexture;
-(id)init;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
@end
