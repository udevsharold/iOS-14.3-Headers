/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	long long _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(void)_postAvailability:(long long)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)dealloc;
-(NSString *)service;
-(void)_updateAvailability;
-(void)updateAvailability;
-(long long)serviceAvailability;
@end
