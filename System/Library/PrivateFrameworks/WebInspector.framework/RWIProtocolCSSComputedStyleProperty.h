/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSComputedStyleProperty : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
+(id)safe_initWithName:(id)arg1 value:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)name;
@end
