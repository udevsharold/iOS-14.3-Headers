/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataSpace.h>

@class NSString;

@interface EQKitMathMLMSpace : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataSpace>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(Schemata*)layoutSchemata;
-(BOOL)isSpaceLike;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
@end
