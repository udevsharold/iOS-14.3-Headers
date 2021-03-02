/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying> {

	NSString* _channelID;
	NSString* _channelPaywallTitle;
	NSString* _hardPaywallTitle;
	NSString* _leakyPaywallTitle;
	NSString* _promotionalPaywallTitle;
	NSString* _channelId;

}

@property (nonatomic,copy) NSString * channelId;                            //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,copy) NSString * channelPaywallTitle;                  //@synthesize channelPaywallTitle=_channelPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * hardPaywallTitle;                     //@synthesize hardPaywallTitle=_hardPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * leakyPaywallTitle;                    //@synthesize leakyPaywallTitle=_leakyPaywallTitle - In the implementation block
@property (nonatomic,copy) NSString * promotionalPaywallTitle;              //@synthesize promotionalPaywallTitle=_promotionalPaywallTitle - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                        //@synthesize channelID=_channelID - In the implementation block
-(NSString *)channelID;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)hardPaywallTitle;
-(NSString *)leakyPaywallTitle;
-(NSString *)channelPaywallTitle;
-(id)initWithChannelID:(id)arg1 channelPaywallTitle:(id)arg2 hardPaywallTitle:(id)arg3 leakyPaywallTitle:(id)arg4 promotionalPaywallTitle:(id)arg5 ;
-(NSString *)promotionalPaywallTitle;
-(void)setChannelPaywallTitle:(NSString *)arg1 ;
-(void)setHardPaywallTitle:(NSString *)arg1 ;
-(void)setLeakyPaywallTitle:(NSString *)arg1 ;
-(void)setPromotionalPaywallTitle:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithChannelID:(id)arg1 configDictionary:(id)arg2 ;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)channelId;
@end
