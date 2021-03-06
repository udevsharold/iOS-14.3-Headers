/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SADialogInflectWordCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) BOOL defaultToSemantic; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * semanticFeatureName; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inflectWordCommand;
+(id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)locale;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)defaultToSemantic;
-(void)setDefaultToSemantic:(BOOL)arg1 ;
-(NSString *)semanticFeatureName;
-(void)setSemanticFeatureName:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSArray *)constraints;
-(void)setLabel:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)label;
-(BOOL)requiresResponse;
@end

