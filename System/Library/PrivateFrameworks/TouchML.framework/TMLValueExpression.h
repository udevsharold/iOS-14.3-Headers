/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString, NSArray;

@interface TMLValueExpression : NSObject <TMLModelSerialize> {

	NSString* _expressionText;
	NSArray* _bindings;

}

@property (nonatomic,readonly) NSString * expressionText;              //@synthesize expressionText=_expressionText - In the implementation block
@property (nonatomic,readonly) NSArray * bindings;                     //@synthesize bindings=_bindings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSArray *)bindings;
-(id)initWithExpressionText:(id)arg1 bindings:(id)arg2 ;
-(NSString *)expressionText;
@end

