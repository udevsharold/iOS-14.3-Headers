/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)_kbTimingFunction;
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithName:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(id)CAMLType;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(float)_solveForInput:(float)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

