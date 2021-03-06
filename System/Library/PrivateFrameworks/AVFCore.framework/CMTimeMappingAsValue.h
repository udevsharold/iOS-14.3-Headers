/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue {

	SCD_Struct_CM9 _timeMapping;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(SCD_Struct_CM9)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_CM9)CMTimeMappingValue;
-(Class)classForCoder;
-(const char*)objCType;
-(void)encodeWithCoder:(id)arg1 ;
@end

