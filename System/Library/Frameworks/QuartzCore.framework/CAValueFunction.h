/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)functionWithName:(id)arg1 ;
-(id)_initWithName:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(unsigned long long)inputCount;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(NSString *)name;
-(unsigned long long)outputCount;
-(void)encodeWithCoder:(id)arg1 ;
@end
