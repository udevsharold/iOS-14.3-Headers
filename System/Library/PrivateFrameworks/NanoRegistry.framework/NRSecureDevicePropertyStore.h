/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _IDToProperty;
	NSMutableDictionary* _propertyToID;
	NSObject*<OS_dispatch_queue> _dirtyQueue;
	BOOL _dirty;

}

@property (nonatomic,readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)classTypes;
-(void)forceWriteSecurePropertyID:(id)arg1 withValue:(id)arg2 ;
-(void)forceImportSecureProperties:(id)arg1 ;
-(id)storeSecureProperty:(id)arg1 ;
-(id)init;
-(id)securePropertyForID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allSecurePropertyIDs;
-(BOOL)dirty;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeSecureProperty:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
