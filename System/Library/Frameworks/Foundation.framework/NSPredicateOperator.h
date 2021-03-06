/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _operatorType;
	unsigned long long _modifier;

}
+(BOOL)supportsSecureCoding;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
+(id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(SEL)_getSelectorForType:(unsigned long long)arg1 ;
+(id)_getSymbolForType:(unsigned long long)arg1 ;
-(id)predicateFormat;
-(void)_setOptions:(unsigned long long)arg1 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)symbol;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(void)_setModifier:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operatorType;
-(SEL)selector;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)modifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
@end

