/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _deviceInfoKeysToValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_keysToValueTypes;
+(id)defaultContext;
+(id)_allKeys;
+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)deviceInfoBoolValueForKey:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(long long)_valueTypeForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_valueTypeForValue:(id)arg1 ;
-(BOOL)hasDeviceInfoValueForKey:(id)arg1 ;
-(id)_rawDeviceInfoKeysToValues;
-(id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1 ;
-(id)deviceInfoStringValueForKey:(id)arg1 ;
-(long long)deviceInfoIntegerValueForKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)deviceInfoFloatValueForKey:(id)arg1 ;
-(NSString *)description;
-(BOOL)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2 ;
-(id)initWithDeviceInfoValues:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2 ;
@end

