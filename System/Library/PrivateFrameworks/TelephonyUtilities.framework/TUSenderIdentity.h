/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, TUHandle, NSString;

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSUUID* _accountUUID;
	TUHandle* _handle;
	NSString* _localizedName;
	NSString* _localizedShortName;

}

@property (nonatomic,readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * accountUUID;                            //@synthesize accountUUID=_accountUUID - In the implementation block
@property (nonatomic,readonly) TUHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedShortName;              //@synthesize localizedShortName=_localizedShortName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedShortName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(TUHandle *)handle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToSenderIdentity:(id)arg1 ;
-(NSUUID *)accountUUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedName;
-(id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

