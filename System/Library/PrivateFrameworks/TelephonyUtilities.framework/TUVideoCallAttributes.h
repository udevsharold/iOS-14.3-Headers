/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding> {

	long long _remoteCameraOrientation;
	long long _localVideoContextSlotIdentifier;
	long long _remoteVideoContextSlotIdentifier;

}

@property (assign,nonatomic) long long remoteCameraOrientation;                       //@synthesize remoteCameraOrientation=_remoteCameraOrientation - In the implementation block
@property (assign,nonatomic) long long localVideoContextSlotIdentifier;               //@synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier - In the implementation block
@property (assign,nonatomic) long long remoteVideoContextSlotIdentifier;              //@synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)remoteCameraOrientation;
-(long long)localVideoContextSlotIdentifier;
-(long long)remoteVideoContextSlotIdentifier;
-(BOOL)isEqualToVideoCallAttributes:(id)arg1 ;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(void)setLocalVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setRemoteVideoContextSlotIdentifier:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

