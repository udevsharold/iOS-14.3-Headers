/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippetInteraction.h>

@class NSString;

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (nonatomic,copy) NSString * attributeName; 
@property (nonatomic,copy) NSString * attributeValue; 
+(id)snippetAttributeOpened;
+(id)snippetAttributeOpenedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)attributeValue;
-(void)setAttributeValue:(NSString *)arg1 ;
-(void)setAttributeName:(NSString *)arg1 ;
-(NSString *)attributeName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

