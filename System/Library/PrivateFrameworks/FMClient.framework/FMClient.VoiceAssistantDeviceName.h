/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SADPDeviceDetail, NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {

	 deviceName;
	 ownerFirstName;
	 ownerLastName;
	 $__lazy_storage_$_syncAnchor;

}

@property (nonatomic,readonly) SADPDeviceDetail * sa_deviceDetail; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * ownerFirstName; 
@property (readonly,nonatomic) NSString * ownerLastName; 
@property (copy,nonatomic) NSString * syncAnchor; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(SADPDeviceDetail *)sa_deviceDetail;
-(NSString *)deviceName;
-(NSString *)syncAnchor;
-(id)init;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(NSString *)description;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3 ;
@end
