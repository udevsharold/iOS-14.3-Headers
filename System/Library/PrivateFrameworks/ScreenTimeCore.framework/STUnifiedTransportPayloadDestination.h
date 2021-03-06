/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>

@class NSString;

@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject> {

	NSString* _address;
	NSString* _type;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)address;
-(unsigned long long)state;
-(unsigned long long)hash;
-(id)initWithDSID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setState:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 state:(unsigned long long)arg3 ;
@end

