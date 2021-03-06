/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {

	double _cornerRadius;
	long long _textSizeAdjustment;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) long long textSizeAdjustment;              //@synthesize textSizeAdjustment=_textSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)init;
-(double)cornerRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(long long)textSizeAdjustment;
-(id)initWithSize:(CGSize)arg1 cornerRadius:(double)arg2 textSizeAdjustment:(long long)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

