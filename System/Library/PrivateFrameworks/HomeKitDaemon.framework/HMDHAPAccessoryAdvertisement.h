/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement {

	BOOL _pairingPresent;
	NSData* _setupHash;

}

@property (nonatomic,readonly) BOOL pairingPresent;              //@synthesize pairingPresent=_pairingPresent - In the implementation block
@property (nonatomic,retain) NSData * setupHash;                 //@synthesize setupHash=_setupHash - In the implementation block
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)pairingPresent;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5 ;
-(void)setSetupHash:(NSData *)arg1 ;
@end

