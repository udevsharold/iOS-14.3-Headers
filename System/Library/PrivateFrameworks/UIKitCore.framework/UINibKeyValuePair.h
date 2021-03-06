/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(void)apply;
-(NSString *)keyPath;
-(id)value;
-(void)applyForSimulator;
-(id)object;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

