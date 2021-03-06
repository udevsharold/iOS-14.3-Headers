/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {

	long long _typeCode;
	Class _objectClass;

}

@property (nonatomic,readonly) long long typeCode; 
@property (nonatomic,readonly) Class objectClass; 
+(BOOL)supportsSecureCoding;
+(id)objectTypeFromClass:(Class)arg1 ;
+(Class)associatedObjectClass;
+(long long)typeCodeFromName:(id)arg1 ;
+(id)objectTypeWithTypeCode:(long long)arg1 ;
+(id)objectTypeWithName:(id)arg1 ;
-(id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)typeCode;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(Class)objectClass;
-(void)encodeWithCoder:(id)arg1 ;
@end

