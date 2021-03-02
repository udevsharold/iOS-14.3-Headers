/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {

	NSString* _targetDescription;
	BOOL _nonLaunching;
	NSString* _service;
	NSString* _instance;
	NSString* _machName;
	NSObject*<OS_xpc_object> _endpoint;

}

@property (nonatomic,copy,readonly) NSString * targetDescription; 
@property (nonatomic,copy,readonly) NSString * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                       //@synthesize instance=_instance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultShellMachName;
+(id)nullEndpointForService:(id)arg1 instance:(id)arg2 ;
+(id)endpointForMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
+(BOOL)supportsBSXPCSecureCoding;
+(id)endpointForSystemMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isNullEndpoint;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)instance;
-(NSString *)service;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqualToServiceEndpoint:(id)arg1 ;
-(NSString *)targetDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end
