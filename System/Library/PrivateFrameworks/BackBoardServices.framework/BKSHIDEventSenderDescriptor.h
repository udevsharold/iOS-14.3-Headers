/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDisplay, NSString;

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _hardwareType;
	BKSHIDEventDisplay* _associatedDisplay;
	BOOL _authenticated;
	unsigned _primaryPage;
	unsigned _primaryUsage;
	unsigned long long _senderID;

}

@property (nonatomic,readonly) long long hardwareType;                                 //@synthesize hardwareType=_hardwareType - In the implementation block
@property (nonatomic,readonly) BKSHIDEventDisplay * associatedDisplay;                 //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) unsigned primaryPage;                                   //@synthesize primaryPage=_primaryPage - In the implementation block
@property (nonatomic,readonly) unsigned primaryUsage;                                  //@synthesize primaryUsage=_primaryUsage - In the implementation block
@property (nonatomic,readonly) unsigned long long senderID;                            //@synthesize senderID=_senderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wildcard;
+(BOOL)supportsSecureCoding;
+(id)build:(/*^block*/id)arg1 ;
+(id)protobufSchema;
-(BOOL)isAuthenticated;
-(long long)hardwareType;
-(unsigned long long)senderID;
-(id)initForProtobufDecoding;
-(unsigned)primaryPage;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDisplay *)associatedDisplay;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(BOOL)arg3 primaryPage:(unsigned)arg4 primaryUsage:(unsigned)arg5 senderID:(unsigned long long)arg6 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(unsigned)primaryUsage;
-(void)encodeWithCoder:(id)arg1 ;
@end
