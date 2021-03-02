/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCAppAttestService : NSObject

@property (getter=isSupported,readonly) BOOL supported; 
+(id)sharedService;
-(BOOL)isSupported;
-(void)generateKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isSupportedReturningError:(id*)arg1 ;
-(id)_loadAppUUID;
-(void)_saveAppUUID:(id)arg1 ;
-(id)_rewrapAsDCError:(id)arg1 ;
-(void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
